# TRACKING.md — iteration log

Each change to runtime/GPU/module behaviour gets an entry here
(symptom → root cause → fix → status). Read the newest entries before
changing runtime or module behaviour; see AGENTS.md for the standing
conventions.

## Iteration 1 — project creation, target inventory (2026-10-26)

**Scope:** initial codegen + skeleton; no playtest yet.

- Decrypted the shipped `default.xex` (360tools `extract_pe`; base
  `0x82000000`, entry `0x821F3EA8`, basic compression) and string-scanned it:
  the shell references
  - five game modules `game:\MPD700/710/790/800/810.bin` (path table ≈
    `0xBFE64`), identified as the only `game:\MPDxxx.bin` references that
    are XEX2 images (`XEX2` magic at file offset 0):
    - `MPD700.bin` Muchi Muchi Pork base ver — base `0x88000000`, size
      `0x730000`
    - `MPD710.bin` MMP "'11 Cave Arrange ver." — base `0x88740000`, size
      `0x880000`
    - `MPD790.bin` MMP "'07 Cave festival ver." — base `0x891C0000`, size
      `0x730000`
    - `MPD800.bin` Pink Sweets base ver — base `0x89900000`, size
      `0x6D0000`
    - `MPD810.bin` Pink Sweets "'11 Cave Arrange ver." — base `0x89FE0000`,
      size `0x740000`
  - data archives `MPD000/1xx/2xx/900.bin`, `PKG000.bin` (Cave archive magic
    `C0 09 01 17` — data, not code), plus `game:\test.bin.rom`,
    `game:\MPD300/310/311/312.bin` (the 3xx group is NOT on the disc copy —
    same expectation as dfkr's never-surfaced `dat170.bin`).
  - DLC content: `mkp:\DLC1000.bin` (Xenia extracted package
    `A147F6AB…` → `DLC1000.BIN`, 12.6 MB, opaque custom container wrapping
    a devkit XEX2, `x360_ca016.exe`, base `0x88000000`) — **deferred to
    playtest**; see AGENTS.md "DLC" for the details.
- Project skeleton cloned from rexglue-dfkr (CMake presets, launch.bat,
  scripts, codegen manifest). Manifest rewritten for the five modules with
  their real guest paths/bases; trap allowlist empty (dfkr convention).
- `mmpps.toml` template carries the sibling pinned cvars.

**Status:** open. Next: static hint pass → codegen → first build → first
playtest (ground truth to fill the mode table in AGENTS.md).

## Iteration 2 — hint pass + unresolved-target triage, gate green (2026-10-27)

**Scope:** static analysis + codegen hardening; build/playtest still pending.

- Static hint pass (`scripts/build_module_hints.ps1`, XenonRecomp binary
  reused from the dfkr tree): modules got 35/38/35/55/55 seeds
  (MPD700/710/790/800/810, ~700 gap-fill stub-candidates each dropped as
  data), shell got 383 seeds with 84 unresolved-b warnings — all of which
  materialized as trap-gate sites, exactly as in dfkr iter-9.
- Wiring the hints into the manifest and regenerating tripped the embedded-
  trap gate with ~110 sites: ~56 shell `unresolved_call` + ~28 shell
  `unresolved_branch` (mostly `cr6` conditional twins), plus per-module
  `unresolved_branch` cr6 twins (MPD700×4, MPD710×4, MPD790×3, MPD800×9,
  MPD810×9). Same classes as dfkr iter-8/9.
- Triage: every unique unresolved **target** address was registered as a
  function in the owning TOML (`scripts/triage_bootstrap.ps1`,
  dfkr iter-9 precedent). Two tool bugs bit and are fixed in the script:
  1. the dedup check used `-like "*[functions."0x…"]*"` where `[` is a
     wildcard character class → silently matched everything and wrote
     nothing (site set frozen across rounds);
  2. the address formatter dropped the `0x` prefix and the entries lacked
     `name =` lines → malformed keys. After normalization
     ([functions."0x…"] + name), one codegen round resolved **all** sites.
- Result: 52 new function registrations (32 shell + 20 across the modules),
  `validate_codegen.ps1` green with the allowlist still intentionally empty
  (0 triaged sites; 488 informational switch-trap sites).
- First `cmake --preset win-amd64-release` configure: OK (clang 22.1.7,
  SDK warning about unknown version = benign).

**Status:** gate green, build in flight. Next: build → run double-check of
`trap_allowlist.txt` staleness (still empty) → first playtest.

## Iteration 3 — first-build compile errors: block-splitting hint misseeds (2026-10-27)

**Scope:** first host build (937-target compile) surfaced a failure class the
embedded-trap gate cannot see: `use of undeclared label 'loc_8805D7E4'` in
`generated/MPD700/mmpps_recomp.8.cpp:12727` (a `bdz` bounds-check branch).

- Root cause: a **hint seed splitting an intra-function block tail STEMICE**.
  `0x8805D7E4` is the `bdz`/`beq` loop-tail target **inside**
  `sub_8805D6E8` (confirmed: the pre-hint baseline emitted both targets as
  plain local `goto loc_8805D7E4` with the label present). The static hint
  pass (XenonRecomp gap-fill head) seeded it, so the analyzer made it a
  function head: the block moved into `sub_8805D7E4`'s body and the brancher
  now emits goto to a label that no longer exists **in its file**. No `bl`
  anywhere targets these heads — they are misseeds, the same "drop
  gap-fill misidentifications" class the hint script already handles for
  STUB emissions, but compile-error-visible rather than STUB-visible.
- All sites found by a tree-wide dangling-label scan (`goto loc_X` without
  `loc_X:` in the same file): 6 (shell `0x8226E6D4/DC/E4/EC` family,
  MPD700 `0x8805D7E4`, MPD710 `0x8879F264`). Every one verified as a local
  label in the pre-hint baseline (`c6d34c8`), none has a genuine call
  reference → all 6 seeds dropped from the hints TOMLs, codegen rerun.
  Scan result after the drop: **0 dangling labels**.
- `scripts/validate_codegen.ps1` gained the scan as a permanent check class
  (`dangling_label`) — these failures otherwise only surface as compile
  errors during a full build. Negative-tested (synthetic `goto loc_DEADBEEF`
  → gate exit 1). Script perf: the first two scan implementations were
  O(n²) (array `+=` reallocation at ~148k shell refs); final per-file
  hashtable version runs the whole gate in <10 s.
- Gate re-run: **code validation OK** (allowlist still empty, 488
  informational switch-traps).
- Status: gate green + committed (`563bb88`); rebuild in flight.

## Iteration 4 — first playtest: module co-residency; SDK table mirror fix (2026-10-28)

**Scope:** first launch. Game boots to the shell; two module loads fail at
first-boot pre-load sequence. SDK change required and applied.

**Ground truth (all five modules vs. sibling predictions):**

- The shell **`XexLoadImage`s all five MPD modules in one pre-boot sequence**
  ("no existing module, loading fresh", 700 → (710 fail) → 790 → (800 fail)
  → 810). **No unload between loads** — the predicted futari-style
  unload→load mode-swap hook does NOT exist at this stage; modules are
  permanently co-resident.
- **Module-casing: lowercased `mpd7xx.bin` registry names match everything**
  (`Registering module` won; no path mismatch errors) — the hand-merged
  `module_registry.cpp` normal-case worry was unfounded.
- Co-resident success set wave 1: **MPD700+MPD790+MPD810** loaded and
  registered (1482/1601/1662 functions). MPD710/MPD800 failed:
  `[error] [core] Module image range [88740000, 891812E8) overlaps existing [88000000, 888E8D48)` →
  `InitializeFunctionTable failed for module 'mpd710.bin'`.
  Same 47 seconds later for wave 2 (second selection attempt).
- `GetProcAddress(ordinal 4/5)` "ordinal out of bounds" on every module —
  the shell queries export ordinals that don't exist in the MPD XEX export
  tables; non-fatal (load continues), and reappears identically across
  waves. [warning] noise unless correlated with a crash — keep an eye but
  do not treat as regression.
- The trace run exited cleanly by itself after the failed wave(s) — the
  shell apparently gives up without a visible fatal (log ends with the
  `GetProcAddress` rejects; no `[critical]`). Window shown was the boot
  screen; no crash.

**Root cause of the load failure:**

- Each recompiled module gets a **per-module dispatch table** for indirect
  calls, `AllocFixed`'d executively inside the guest v80000000 heap at
  `IMAGE_BASE + IMAGE_SIZE` (+ 2*(code_size+64KB) of slots). MMPPS' five
  module XEX headers pin bases 0x88000000..0x89FE0000 so images don't
  overlap, but MPD700's table `[0x88730000, ~0x888D0000)` lands inside
  MPD710's image `[0x88740000, ...)`, and MPD790's table inside MPD800's —
  the sibling ports never saw this: their modes unload before swapping,
  so only one module is resident at a time.

**Fix (SDK fork `bdcebf6`, all four touch-points):**

- Dispatch tables are now **mirrored into the 0x90000000-0x9FFFFFFF window**:
  `table_base = IMAGE_BASE + IMAGE_SIZE + 0x10000000`
  (`FunctionDispatcher::kFunctionTableMirrorDelta`). Deterministic, per-image
  (collisions mirror the image layout, which the XEX headers guarantee
  disjoint), never overlaps any image or other table, and stays inside the
  otherwise-unused `v90000000` guest heap. Linear guest↔host math holds
  (`TranslateVirtual` = `virtual_membase_ + VA`, zero heap offsets for the
  virtual heaps), so the generated `REX_LOOKUP_FUNC` macro just adds
  `REX_TABLE_DELTA` (template `_indirect_call.inja`).
- `xmemory.cpp` Initialize/DestroyFunctionTable allocate/release from
  `heaps_.v90000000`; `function_dispatcher.cpp` overlap checks now run on
  image-vs-table and table-vs-table ranges using the mirrored bases.
  Thunk addresses (`AllocateThunk`, `GuestAddress` slots in
  `[code_base+code_size, +64KB)`) are table-relative and placement-
  independent — unchanged.
- SDK committed in the fork (`bdcebf6` on top of `348c804`), pointer
  bumped (`8f0c0e7`), all targets regenerated, gate green, rebuild +
  relaunch pending.

**Status:** first table-mirror launch failed on an over-broad check: the
image-vs-table condition from the old layout was kept verbatim, so every
image "overlapped" the entrypoint's own mirrored-table range
(`[82000000, 93048A40)`) — images live exclusively in the 0x8xxxxxxx window
now, so only table-vs-table (+ code-vs-code) collision checks remain
(SDK fork `a4cd7af`, pointer bump `b212915`).

**Result after the check fix:** **all five modules load co-resident**
(1482/1501/1601/1611/1662 functions registered, zero overlap errors, no
`[critical]`) — the shell boots and idles rendering (15+ min session
observed). Awaiting UI-side mode entry playtest.
