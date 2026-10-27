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
