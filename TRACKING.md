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

## Iteration 5 - crash diagnosis: dispatch table overwritten by the next module image (2026-10-29)

**Symptom:** every launch died with `0xC0000005` (DEP execute) at the *same*
host address `0xB2B00007981`, ~26-60 s after boot, in module `unknown`.
Reproduced 5/5 runs (also pre-mirror, so unrelated to the Iteration-4 fix).

**Diagnosis (WER LocalDumps + procdump full dump + a Python minidump reader):**

- Crash thread stack, innermost frame `mmpps_MPD700.DLL+0x13FADE`. Disassembly
  of that site is the generated indirect-call sequence: guest jump-table word
  -> bounds check -> `mov rax, [rdx + rax]` (dispatch slot) -> `call rax`.
- Crash registers: `RDI`/`RDX` = `0x200000000` (arena base), guest target
  (ctx+0x48) = `0x88030430`, and the slot read was
  `0x298770860` = `IMAGE_BASE+IMAGE_SIZE+0x10000000 + (0x88030430-0x88010000)*2`.
- **The slot contained `0xB2B00007981` - MPD710 image bytes, not a function
  pointer** - even though `0x88030430` IS registered (`SetFunction(0x88030430,
  sub_88030430)` in `generated/MPD700/mmpps_register.cpp`, "1482 functions").
- Root cause: **the 0x90000000-0x9FFFFFFF window is not separate storage.**
  `xmemory.cpp`'s `map_info` maps *both* the 0x80000000-0x8FFFFFFF (64 KB
  pages) and 0x90000000-0x9FFFFFFF (4 KB pages) views from the **same file
  offset 0x80000000** - it is the Xbox 360's 4 KB alias of XEX memory. The
  dump confirms it: guest `0x88730000` and `0x98730000` are byte-identical,
  including MPD710's `MZ` image header at `0x88740000`/`0x98740000`.
  So the Iteration-4 "mirror" was a no-op on real storage: MPD700's table
  still landed at `0x88730000`, and when **MPD710's image was loaded at
  `0x88740000`, it overwrote every table slot from guest `0x88018000` up** -
  including the slot for `0x88030430` (table+0x40860 = image+0x30860).
  An indirect call to that (correctly registered) function then jumped through
  MPD710 image data. Pre-mirror and post-mirror runs share the exact storage,
  hence the identical fault address.

**Fix (SDK fork): dispatch tables moved to HOST memory.**

- `PPCImageInfo` gains `::PPCFunc*** function_table` (address of the module's
  generated `rex_function_table` pointer); `init_cpp.inja` sets
  `.function_table = &rex_function_table`, `register_cpp.inja` defines the
  global per binary.
- `_indirect_call.inja`: `REX_LOOKUP_FUNC(x, y)` now indexes
  `rex_function_table[(u32(y) - REX_CODE_BASE) >> 2]` (one 8-byte slot per 4
  bytes of guest code) - no guest address arithmetic, no `REX_TABLE_DELTA`.
- `Memory::InitializeFunctionTable` allocates `new PPCFunc*[slots]()`
  (zero-initialised) and returns it; `SetFunction` writes the host table;
  `DestroyFunctionTable` `delete[]`s it. `FunctionDispatcher` hands the table
  back via an out-param and drops all table/image overlap checks (host tables
  cannot collide; only guest code-range overlap is still checked).
- `runtime.cpp` (entrypoint) and `kernel_state.cpp` (user modules) publish the
  table through `PPCImageInfo::function_table` before any recompiled code runs.
- Registered-but-not-yet-called slots are now guaranteed zero, so an
  unregistered in-bounds indirect target takes the `ResolveIndirectFunction`
  fallback (logs the guest address) instead of jumping through image bytes.

**Status:** regenerated all six targets, gate green, rebuild in flight.

> **Correction (Iteration 5):** the table-mirror described above did **not**
> actually separate the table from module images ? the 0x90000000 window is
> the 4 KB alias of the same XEX storage (`map_info` maps both views from file
> offset 0x80000000). The co-residency load fix is real (overlap checks no
> longer reject adjacent images), but the crash it appeared to fix was only
> suppressed until MPD710's image load overwrote the table. Iteration 5 has
> the real fix (host-memory tables).

## Iteration 6 - Pink Sweets side: UD2 in MPD800 from a mis-detected jump table (2026-10-30)

**Symptom:** MMP side playtested clean (all modes). Switching to the Pink Sweets
side killed the process with `0xC000001D` (illegal instruction) in
`mmpps_MPD800.dll+0x263ECE` - a new signature, not the Iteration-5 DEP fault.

**Diagnosis:**

- WER dump + the Iteration-5 minidump tooling: the fault is the recompiler's
  own `ud2` for `Switch case out of range` (`build_bctr` default arm), i.e. a
  generated `bctr` jump-table dispatch, not a bad indirect call.
- The release DLLs are stripped (`llvm-nm`: "no symbols"), so the host->guest
  map was reconstructed by disassembling the exported `ReXModule_Register`
  (every `registrar->SetFunction(0xGUEST, sub_GUEST)` shows up as
  `leaq <sub>(%rip), %r8` + `movl $0xGUEST, %edx`). 1611/1611 entries recovered.
  Fault `0x180263ECE` -> guest `0x8993B998` + `0x7E`.
- `generated/MPD800/mmpps_recomp.8.cpp` `sub_8993B998`: guest code is
  `lwzx r5,r9,r8` (per-entry word) -> `rlwinm r4,r5,2` -> `lwzx r11,r4,r6`
  (jump table at `0x89A8F6D0`) -> `mtctr r11` -> `bctr` at `0x8993B9C4`.
  The auto-detected table used **r6 (the table-base register) as the index**
  and produced a single bogus case, so the emitted `switch` compared
  `0x89A8F6D0` against `0` and always fell into `__builtin_trap()`.
- The real table (read out of the dump at guest `0x89A8F6D0`) has **33
  entries**: `[0]=0x8993B9C8`, `[1..9]=0x8993BB00`, `[10..15]=0x8993B9C8`,
  `[16..31]=0x8993BC68`, `[32]=0x8993BFF8`, `[33]=0` (terminator).
- The same defect exists in **MPD810** (Pink Sweets '11 Cave Arrange):
  `sub_8A01CE50`, `bctr` at `0x8A01CE7C`, table `0x8A16F6A8`, same 33-entry
  shape. It had not been reached yet - it would have crashed identically.

**Fix (project-side `[[switch_tables]]` overrides, no SDK change):**

- `mmpps_MPD800_functions.toml`: `address = 0x8993B9C4`, `register = 5`,
  33 labels.
- `mmpps_MPD810_functions.toml`: `address = 0x8A01CE7C`, `register = 5`,
  33 labels.
- (`[[switch_tables]].address` is the **bctr instruction address**
  - `JumpTable::bctrAddress` - not the table address; `register` is the index
  register. All 8 target functions were already registered.)

**Sweep for the same class:** of the 488 `switch_trap` sites, exactly two had
<=1 case (the two above) and none had a constant-written index register. A
full cross-check (resolve each site's table base from the generated `lwzx`,
read the guest table from the dump, compare contiguous valid entries with the
emitted case count) found **no real mismatch**; the single flagged site
(MPD790 `0x8921ED34`, 15 cases vs 16 valid words) is a false positive - the
guest does `cmplwi cr6,r10,14` + `bgtlr cr6` before dispatching, so index 15
is unreachable by construction.

**Status:** regenerated, gate green (488 informational switch sites, 0
unresolved), rebuilt, relaunched - all five modules register, MMP and Pink
Sweets sides playable. Tooling added under `out/tools/` (gitignored):
`map800.py` (symbol map from `ReXModule_Register`), `trap_ctx.py` (trap
context/stack from a dump), `verify_jumptables.py` (table cross-check).

## Iteration 7 - first full playtest: both sides clean, deferred questions closed (2026-10-30)

**Result:** Muchi Muchi Pork side (all modes) and Pink Sweets side (base +
'11 Cave Arrange) both play clean - no crashes, no `[critical]` lines, clean
window-close shutdown (`Execution complete` / `Title terminated`).

**Log ground truth (`logs/mmpps.log`, 09:21:49-09:29:53):**

- **All five modules load at boot, once, and are never unloaded** - five
  `XexLoadImage('game:\MPD7xx/8xx.bin'): no existing module, loading fresh`
  lines inside ~150 ms, zero `UnloadUserModule` / `XexUnloadImage` lines for
  the whole session. Confirms the Iteration-4 co-residency finding: MMPPS needs
  no base-overlap swap hook, and the host-memory dispatch tables (Iteration 5)
  are the right shape for it.
- Registered function counts unchanged: 1482 / 1501 / 1601 / 1611 / 1662.
- Three achievements fired (`XGIUserWriteAchievements` ids 0x1A, 0x30, 0x01).
- Only recurring noise: `GetProcAddress(004/005): ordinal out of bounds` +
  `XexGetProcedureAddress ordinal 5/6 not found` per module (non-fatal, as
  recorded in Iteration 4), and one SDL `gamecontrollerdb.txt` notice.

**Deferred questions closed:**

- **`game:\MPD300/310/311/312.bin` never surface.** No `MPD3xx` string, mount
  or open attempt anywhere in the session log, on either side. As expected
  (same class as dfkr's `dat170.bin`): the path table entry is dead code for
  these builds. No manifest change needed.
- **`mkp:\DLC1000.bin` is never touched.** No `mkp` mount, no
  `XexLoadImage`, no failed-open for the DLC container in the whole session,
  with the extracted package sitting in `user_data/0000000000000000/...`.
  Per AGENTS.md this stays deferred - do not spend time on the container until
  a log actually shows the shell reaching for it.
- **Save path works.** `SYSTEM.DAT\SYSTEM.DAT` was written (36,520 B) at
  09:29:12, the same instant as
  `[NtCreateFile] FAILED: path='save:\SYSTEM.DAT' -> 0xc000000f`. The guest
  probes the bare package path first and then resolves the real file inside
  the directory package, so the warning is benign noise, not a failed save.

**Status:** project playable end to end. No open defects; the remaining
backlog items are the deferred DLC container and cosmetic log noise.

### Housekeeping - crash-dump capture removed (2026-10-30)

The 3.5 GB dumps used for the Iteration-5/6 triage came from a **machine-level
WER setting**, not from the project:
`HKLM\SOFTWARE\Microsoft\Windows\Windows Error Reporting\LocalDumps\mmpps.exe`
(`DumpFolder=logs\dumps`, `DumpType=2` = full memory, `DumpCount=3`). That key
has been deleted, and the accumulated dumps (10.8 GB) removed from `logs\dumps`.
Nothing in the repo, `launch.bat`, `mmpps.toml`, CI or the SDK fork enables dump
writing - the SDK has no `MiniDumpWriteDump`/unhandled-exception dump path at
all (only a guest export stub for `SetUnhandledExceptionFilter`), so a normal
crash now just produces the usual Windows "Application Error" event plus the
`[error]`/`[critical]` lines in `logs/mmpps.log`.

To re-enable for a future crash hunt, recreate that key with
`DumpFolder`/`DumpType`/`DumpCount`, and delete it again afterwards.
