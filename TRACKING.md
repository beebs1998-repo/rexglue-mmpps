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
