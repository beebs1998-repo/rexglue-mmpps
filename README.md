# MMPPS Recomp

Recompilation of the Cave Xbox 360 shooter compilation *Muchi Muchi Pork &
Pink Sweets* (title `435A07DE`) using
[ReXGlue](https://github.com/rexglue/rexglue-sdk).

This is the fifth title in the family of ReXGlue recomp projects, sharing its
methodology (and its SDK fork) with the sibling ports:

- [rexglue-futari](https://github.com/beebs1998-repo/rexglue-futari) —
  *Mushihimesama Futari* (first project)
- [rexglue-dfkbl](https://github.com/beebs1998-repo/rexglue-dfkbl) —
  *DoDonPachi DaiFukkatsu Black Label* (second project)
- [rexglue-mushi](https://github.com/beebs1998-repo/rexglue-mushi) —
  *Mushihimesama* (third project)
- [rexglue-dfkr](https://github.com/beebs1998-repo/rexglue-dfkr) —
  *DoDonPachi DaiFukkatsu Resurrection* (fourth project)

The project builds a native `mmpps.exe` (plus five game-module DLLs, all from
the disc) from statically recompiled PowerPC code. **The recompiled
code and a patched ReXGlue SDK are included in this repository**, so the
project builds on a clean machine without the game. Only *running* it needs
your own copy of the game data.

For the engineering history (what was fixed and why), see
[TRACKING.md](TRACKING.md). Agent-/developer-facing notes live in
[AGENTS.md](AGENTS.md).

## Requirements

**To build** — no game files needed:

- CMake 3.25 or newer
- Ninja
- LLVM/Clang with C++23 support
- Windows: Visual Studio C++ build tools with a Windows SDK
- Linux: `libgtk-3-dev libx11-xcb-dev libvulkan-dev libasound2-dev libpulse-dev libpipewire-0.3-dev`
  (Debian/Ubuntu names); the `linux-*` presets expect `clang-20`/`clang++-20`

**To run** — your own copy of the *Muchi Muchi Pork & Pink Sweets* disc,
extracted into `game_data/`:

```
game_data/
├─ default.xex          # entrypoint (shell)
├─ MPD700.bin           # Muchi Muchi Pork (base ver) — game module
├─ MPD710.bin           # MMP '11 Cave Arrange ver — game module
├─ MPD790.bin           # MMP '07 Cave festival ver — game module
├─ MPD800.bin           # Pink Sweets (base ver) — game module
├─ MPD810.bin           # Pink Sweets '11 Cave Arrange ver — game module
├─ MPD000/1xx/2xx/900.bin, PKG000.bin   # data archives (loaded as data)
├─ AvatarAssetPack
└─ nxeart
```

Unlike the sibling ports, the five game modules pin their own fixed,
non-overlapping guest load addresses (see `mmpps_manifest.toml`); the
`MPDxxx.bin` data archives are loaded as data, not recompiled.

### DLC

A marketplace content package exists (content `00000002`, id
`A147F6AB5833AFC6F68A7BBCDE3F28AFE6E9AF2E43`, extracted to
`user_data/0000000000000000/435A07DE/00000002/…/DLC1000.BIN`). The shell
references it through the guest path `mkp:\DLC1000.bin`; its actual role
(loadable module vs data) is still being investigated — see AGENTS.md
"DLC" and TRACKING.md. No DLC handling is wired up day-one.

## Layout

| Path | What |
| --- | --- |
| `src/` | Host application (`main.cpp`, `mmpps_app.h`) |
| `generated/default/` | Recompiled entrypoint + `dll_targets.cmake` / `module_registry.cpp` |
| `generated/MPD700\|MPD710\|MPD790\|MPD800\|MPD810/` | Recompiled game modules |
| `generated/rexglue.cmake` | SDK/CMake glue (codegen auto-generation disabled — see below) |
| `mmpps_manifest.toml` | Codegen manifest (entrypoint + 5 modules, with the per-module guest bases documented) |
| `mmpps*_functions.toml` | Extra dynamic entrypoints registered per target |
| `mmpps.toml` | Settings template — the live copy is staged next to the exe; editable via the F4 overlay |
| `thirdparty/rexglue-sdk/` | Patched ReXGlue SDK (git submodule, pinned) |
| `scripts/codegen_all.ps1` | Regenerate all recompiled code (needs the game) |
| `scripts/build_module_hints.ps1` | Static function-entry hint derivation (needs the game, once per machine) |
| `scripts/validate_codegen.ps1` | Embedded-trap gate — runs after codegen and in CI |
| `scripts/stage_config.cmake` | Copies `mmpps.toml` next to the exe (if missing) — see "Settings" |
| `TRACKING.md` | Iteration log (bugs found + fixes) |

## Building

Clone with the submodules:

```
git clone --recurse-submodules https://github.com/beebs1998-repo/rexglue-mmpps.git
cd rexglue-mmpps
```

(Already cloned without them? Run `git submodule update --init --recursive`.)

The SDK submodule itself pulls ~20 upstream dependencies on first init, so
this step can take a few minutes.

### Windows

```
cmake --preset win-amd64-release
cmake --build --preset win-amd64-release --parallel
```

### Linux

```
cmake --preset linux-amd64-release
cmake --build --preset linux-amd64-release --parallel
```

The build places the executable and all module/runtime DLLs in
`out/build/<preset>/`. The settings template (`mmpps.toml`) is staged next to
the executable on first build (if not already there).

## First launch

1. Put your extracted game data in `game_data/` (see Requirements).
2. Either run `launch.bat` (Windows), or start the executable directly:

```
out\build\win-amd64-release\mmpps.exe --game_data_root="game_data" --user_data_root="user_data"
```

The game writes logs to `logs/` and saves to `user_data/`. Xenia Canary
exported saves/replays (the `content/` tree) can be copied straight into
`user_data/` per the title-id/device directory layout - the SDK accepts both
raw `XCONTENT_AGGREGATE_DATA` dumps and full STFS/CON package headers.

## Settings

The game reads and writes `mmpps.toml` **next to the executable**
(`out\build\win-amd64-release\mmpps.toml` by default). The copy in this
repository is a *template*: the build (POST_BUILD) and `launch.bat` stage it
next to the exe **only if the live file does not already exist**, so the
curated defaults are in effect from the very first launch. A copy-if-missing
staging rule means:

- your F4 edits and manual tweaks are never clobbered by a rebuild;
- editing the repo template after first stage does NOT propagate - delete
  the live copy (or re-edit via F4) to re-sync.

Saving is **diff-only**: only cvars whose current value differs from the
compiled-in SDK default are written. A cvar sitting at its default therefore
does not appear in the file, and a default-equal line is dropped by the next
save - that is expected, not a desync between the menu and the file.

Current notable options (bundled SDK = pristine mainline plus the fixes
documented in AGENTS.md):

| Option | Default | Effect |
| --- | --- | --- |
| `d3d12_submit_on_primary_buffer_end` | `false` | D3D12 submission at primary buffer end; `false` is the validated slowdown fix for this title family (diff-only save usually omits it) |
| `vsync` | `true` | Present sync; keep on for correct 60 Hz guest pacing |
| `gpu_allow_invalid_fetch_constants` | `true` (template) | Accept invalid Xenos fetch constants instead of failing the draw |
| `mnk_mode` | `false` | Keyboard/mouse controller emulation (enabled in the template) |
| `log_file` etc. | sequential files | Template pins a fixed rotating `logs/mmpps.log` (see the template header) |

## Regenerating the recompiled code (optional)

Only needed if you change the manifest/function lists, or bump the SDK. It
requires the game files **and** the `rexglue` CLI (built with the SDK).

```
.\scripts\codegen_all.ps1
```

The script ends with the embedded-trap gate (`scripts/validate_codegen.ps1`):
a codegen turn that emits a new recompiler-trap site fails there instead of
as a runtime crash (see `scripts/trap_allowlist.txt` for the triaged
baseline). A one-time per-machine build of the XenonRecomp submodule
(`pwsh .\scripts\bootstrap_xenon.ps1`) is also needed only for
`scripts/build_module_hints.ps1` - the static missing-function derivation
that seeds the `mmpps*_hints.toml` files.

Two facts from the sibling projects that still apply here:

- `codegen` rewrites `generated/default/dll_targets.cmake`,
  `generated/default/module_registry.cpp` and `generated/rexglue.cmake` for
  the *last* target only. The committed copies are hand-merged (all five
  modules) and auto-codegen is disabled in `rexglue.cmake` — runs stay one
  target per invocation, and `codegen_all.ps1` restores the merged files
  (`git checkout -- ...`). Don't let these get clobbered.
- The **one difference** vs. the siblings: this title's five modules do NOT
  share a guest base, so the address-overlap check isn't what forces the
  per-target-rule; per-register history (futari Iteration 20) does.

## Known issues

See [TRACKING.md](TRACKING.md) for the current open items and the
playtest-driven iteration log. Day-one status:

- The shell references `game:\MPD300/310/311/312.bin` data archives that are
  not present on the local disc copy — expected to never surface (dfkr had
  the same class of unreferenced entries); to be confirmed at first playtest.
- `mkp:\DLC1000.bin` (content package `A147F6AB…`) has an unusual internal
  container format that current tooling cannot fully extract — handled when
  (if) the first playtest shows the shell loading it.

## Credits & legal

- Runtime/toolkit: [ReXGlue](https://github.com/rexglue/rexglue-sdk); this
  repo pins a lightly patched fork (`thirdparty/rexglue-sdk`, shared by the
  sibling ports) with the fixes documented in AGENTS.md.
- **No game data or DLC packages are included.** You must own Muchi Muchi
  Pork & Pink Sweets and extract your own `game_data/`. The recompiled code
  in `generated/` is derived from that game and is provided for
  interoperability/archival research; use only with legally owned data.
