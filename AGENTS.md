# AGENTS.md — working in this repository

Agent- and developer-facing notes. For the public, human-facing guide, see
[README.md](README.md). All paths are repo-relative. Methodology is shared
with the sibling ports `rexglue-futari` (first), `rexglue-dfkbl` (second),
`rexglue-mushi` (third) and `rexglue-dfkr` (fourth); read their
AGENTS/TRACKING for the history behind each convention.

## What this is

A [ReXGlue](https://github.com/rexglue/rexglue-sdk) recompilation of the Xbox
360 shooter compilation *Muchi Muchi Pork & Pink Sweets* (`435A07DE`). It
builds a native host executable (`mmpps`) from statically recompiled PowerPC
code, plus **five game-module shared libraries** loaded at runtime — all five
come from the disc.

Two facts dominate everything else:

1. **The recompiled code is committed.** `generated/**` is checked in, so the
   project builds without the game. Do not hand-edit generated files;
   regenerate them (`scripts/codegen_all.ps1`).
2. **The SDK is a pinned submodule with local changes in the fork.**
   `thirdparty/rexglue-sdk` points at `beebs1998-repo/rexglue-sdk` @
   `348c804` (`main` tip). Contents of the fork relative to pristine v0.10.0
   (`c94f5eb`), all carried in from the sibling projects:
   - SSSE3 build flag (`51624b5`)
   - module-filename match fix for unload paths (`09ef27d`) + NT device-prefix
     strip (`a388c9d`)
   - D3D12 `d3d12_submit_on_primary_buffer_end` default flipped to `false`
     — THE validated slowdown fix, validated per-game on Mushihimesama
     captures (dfkbl TRACKING iter-27)
   - cvar TOML save-serialization fix (`b773a88`)
   - save-import fixes: accept full XContent/STFS package headers in
     `ReadContentHeaderFile` (`9019af7`) — makes Xenia Canary imported
     saves/replays work as-is
   - the `profile_name` gamertag cvar (`bf63f94`)
   - the branch-target classification fix (`348c804`)
   Building against a different SDK can change/crash behaviour. The
   experiments branch (`legacy`) is not used here.

## THE module-layout difference from every sibling port

futari/dfkbl/mushi/dfkr all had game-mode modules that **share one guest
base** (usually `0x88000000`), forcing unload→load swaps and "one codegen
target per run" because of the overlap check. **MMPPS is different**: each of
the five module XEX headers pins its own fixed load address, and the five
ranges do not overlap:

| File | Game/version (strings in each image) | Guest base | Range |
| --- | --- | --- | --- |
| `MPD700.bin` | Muchi Muchi Pork (2007, base ver) | `0x88000000` | –`0x88730000` |
| `MPD710.bin` | MMP "'11 Cave Arrange ver." | `0x88740000` | –`0x88FC0000` |
| `MPD790.bin` | MMP "'07 Cave festival ver." | `0x891C0000` | –`0x898F0000` |
| `MPD800.bin` | Pink Sweets (2006, base ver) | `0x89900000` | –`0x89FD0000` |
| `MPD810.bin` | Pink Sweets "'11 Cave Arrange ver." | `0x89FE0000` | –`0x8A720000` |

Identification ground truth: these five are the only `game:\MPDxxx.bin`
references resolved to XEX2 images (magic `XEX2` in their first bytes); the
string scan of the decrypted entrypoint found the path table at ≈`0xBFE64`
(700/710/790/800/810), plus mode-name strings inside each module
("MuchiMuchiPoke", "Pink:…", "'11 Cave Arrange ver.", "'07 Cave festival
ver.", "PINK SWEETS", pdb paths `…res\MPDxxx.pdb`). The run-log
`XexLoadImage` lines remain ground truth once playtesting starts.

Consequences (and what stays the same):

- The sibling **futari-style base-overlap swap hook is NOT expected** — the
  kernel loads each module into its own address range. Expect "possibly no
  module unload at all between modes"; confirm via the `load_count` /
  `XexLoadImage` log lines at first playtest.
- A single combined `rexglue codegen mmpps_manifest.toml` would STILL be
  rejected *not* by the overlap check, but sibling history (futari Iteration
  20: `rexglue codegen` crashed analyzing multiple module targets in one
  process) keeps the **one target per invocation** rule
  (`scripts/codegen_all.ps1`).
- Everything else from the sibling conventions (hints-first include lists,
  hand-merged glue files, trap gate, config staging) is unchanged.

## Data files (NOT recompiled)

The remaining `game_data/*.bin` files use Cave's private archive magic
(`C0 09 01 17`) and are loaded as *data*, directly from `game_data_root` by
the SDK's VFS resolution:

| File | Content (from its internal path strings) | Notes |
| --- | --- | --- |
| `MPD000.bin` | `\shader\…` (shaders/VRAM) | shared |
| `MPD100/110/111/112.bin` | MMP-side data archives | biggest: 77 MB |
| `MPD200/210/211/212.bin` | Pink Sweets-side data archives | |
| `MPD300/310/311/312.bin` | **NOT on the disc copy** | see below |
| `MPD900.bin` | backgrounds (`\wall_p01.b…`) | 86 MB |
| `PKG000.bin` | `\pkgres\…` (fonts, `nxeart` etc.) | |

The entrypoint also references `game:\MPD300/310/311/312.bin`
(path-string table at ≈`0xB7574`, three 4-file groups 1xx/2xx/3xx). Same
class of finding as dfkr's `dat170.bin` — **confirmed never surfaced**
(Iteration 7 full playtest, both sides, all modes: no `MPD3xx` open/mount
anywhere in the log). Dead path-table entries for these builds.

Also present: `game_data/AvatarAssetPack` and `game_data/nxeart` (dashboard
assets, untouched).

## Game save data (replays/system config)

`user_data/<xuid>/<title_id>/00000001/` — this title is `435A07DE`. The
local tree already follows Xenia Canary's layout (one directory package per
data file: `MP_REPLAY_*.DAT/<name>`, `SYSTEM.DAT/<name>`, + raw
`XCONTENT_AGGREGATE_DATA` dumps under `Headers/00000001/…`), which the SDK
accepts as-is (`9019af7`). Guest XUID: `B13EBABEBABEBABE` (shared
sibling convention).

## DLC — `mkp:\DLC1000.bin` (unresolved, playtest-deferred)

Xenia Canary extracted one marketplace content package (content `00000002`,
id `A147F6AB5833AFC6F68A7BBCDE3F28AFE6E9AF2E43`) to
`user_data/0000000000000000/435A07DE/00000002/A147F6AB…/DLC1000.BIN`
(12.6 MB). The decrypted entrypoint references the guest path
`mkp:\DLC1000.bin` (string at ≈`0xB6030`, "mkp" mount root) — but the
payload is a custom container:

- Payload: `2C 16` + `XBOXLIVECONTENT` magic; a ~0x8B0-byte signature/hash
  record block; then **one embedded XEX2** at offset `0x8B0`
  (devkit, DLL module, original PE name `x360_ca016.exe`, entry
  `0x880AE038`, **image base `0x88000000`** — i.e. it *would* overlap
  `MPD700`'s range, header-claimed image size `0xF80000`).
- `tools/extract_pe.py` fails on it: the FFI lists only 2.5 basic blocks
  (`ffi_size 0x20`), summing to `0x620000` ≪ `0xF80000`, so the extraction
  is truncated/unvalidated and contains no readable strings.
- `tools2/xextool.exe -l` parses it fine (says "Uncompressed / Encrypted /
  DLL Module", export table at `0x880B72D4`) but `-o … -e d` writing fails.
- There is **no `Headers/00000002/*.header`** file for this package in
  `user_data/`, so the sibling "append 0xFFFFFFFF license tail to the staged
  header" DLC-unlock convention (futari TRACKING iter-20) has nothing to
  append to — if the game gates DLC modes on the license mask, a header
  package may need to be synthesized (see futari iter-20/23), but unlike
  futari, a `[Kernel] …profile`-style cvar hack (license mask) must NOT be
  attempted; the `[Kernel] profile_name` shape is the only valid bracketed
  section (futari iter-23 lesson).

Do NOT spend time on this until the first playtest shows the shell actually
doing an `XexLoadImage` (or a failed mount) on `mkp:\DLC1000.bin`. **Iteration 7
playtest (both sides, all modes): never touched** — no `mkp` mount, no
`XexLoadImage`, no failed-open, with the extracted package present in
`user_data/`. Still deferred. If it turns out to be a loadable module, extract
properly (xextool GUI or manual FFI work), add it to `mmpps_manifest.toml` (its
base `0x88000000` overlaps `MPD700` — check the collision policy with the
runtime first) and regenerate.

## Layout

| Path | Notes |
| --- | --- |
| `src/main.cpp` | `REX_DEFINE_APP`; includes `generated/default/mmpps_init.h` |
| `src/mmpps_app.h` | `MmppsApp` — overrides `ReXApp` hooks (F3 overlay stats, F11 fullscreen, save-on-close) |
| `generated/default/` | Entrypoint recomp + `dll_targets.cmake`, `module_registry.cpp`, `sources.cmake` |
| `generated/MPD700`, `MPD710`, `MPD790`, `MPD800`, `MPD810/` | Module recomp |
| `generated/rexglue.cmake` | CMake glue; **auto-codegen is disabled here** (see below) |
| `mmpps_manifest.toml` | Codegen manifest (entrypoint + 5 modules) |
| `mmpps_functions.toml` | Dynamic entrypoints for the entrypoint XEX |
| `mmpps_MPD*_functions.toml` | Dynamic entrypoints/overrides per module |
| `mmpps_hints.toml` (later), `mmpps_<module>_hints.toml` | Generated function-entry hints; listed FIRST in each include list |
| `mmpps.toml` | Runtime settings TEMPLATE (staged next to the exe by the build/launch.bat; live-editable via F4) |
| `scripts/stage_config.cmake` | Copy-if-missing config staging (POST_BUILD) |
| `TRACKING.md` | Iteration log — read before changing runtime/GPU/module behaviour |
| `game_data/`, `user_data/`, `logs/`, `out/` | Local only, gitignored |

## Build & run

```
cmake --preset win-amd64-release
cmake --build --preset win-amd64-release --parallel
out\build\win-amd64-release\mmpps.exe --game_data_root=game_data --user_data_root=user_data
```

`game_data/` must contain your own `default.xex`, the five `MPD7xx/8xx.bin`
modules and the data archives (MPD000/MPD1xx/MPD2xx/MPD900/PKG000).
Requires the submodules: `git submodule update --init --recursive`.

## Config-file staging project convention (carried over from mushi)

`SetupEnvironment` sets the live config to `exe_dir/mmpps.toml`, and a
missing file is benign-but-degrading (game silently runs on compiled-in
defaults: no keybinds/mnk, no log rotation, no pinned cvars). So the curated
template is staged by construction:

- POST_BUILD stages the template next to the exe **if missing**
  (`scripts/stage_config.cmake`).
- `launch.bat` applies the same copy-if-missing rule.
- CI ships `mmpps.toml` inside the build artifact.

Never overwrite a live config: F4 saves and manual edits must survive every
build. If the template changes after first stage, delete the live copy or
re-edit via F4 to re-sync (documented in README "Settings").

## Codegen

Auto-codegen is deliberately disabled in `generated/rexglue.cmake` (sibling
convention). Code is generated one target per run and committed.

Two generated files are **hand-merged** and must not be clobbered:

- `generated/default/dll_targets.cmake` — CMake targets for all five module DLLs.
- `generated/default/module_registry.cpp` — registers all five modules.

`rexglue codegen --target <name>` rewrites both (and `generated/rexglue.cmake`) for
the last target only. `scripts/codegen_all.ps1` runs each target then restores the
committed versions with `git checkout --`. If you regenerate by hand, do the same.

Workflow when the game hits an unregistered function
(`[FATAL] Call to invalid or unregistered function at guest address 0x...`):

1. Add the address to the right `mmpps*_functions.toml` (entrypoint vs the
   module that logged it). The module address ranges are **declared on each
   module's manifest table entry above** — pick the module whose range
   contains the address.
2. `.\scripts\codegen_all.ps1`
3. Rebuild + re-stage (see Conventions).
4. Record the iteration in `TRACKING.md`.

## Static function-hint derivation (`scripts/build_module_hints.ps1`)

The analyzer misses functions that are only reached by indirect calls (no
PDATA/static edge). The derivation pass finds them statically, per target:

1. Run XenonRecomp (git submodule `thirdparty/XenonRecomp`, fork
   `beebs1998-repo/XenonRecomp` pinned to upstream `ddd128b`; build once per
   machine with `pwsh .\scripts\bootstrap_xenon.ps1`) on the image for a
   full-coverage reference function map (PDATA + bl-scan + gap-fill).
2. Diff that map against ReXGlue's registered set (a clean codegen run with
   the target's TOML includes emptied — the entrypoint always keeps
   `mmpps_functions.toml`, whose dynamic entrypoints are invisible to static
   analysis and required by CLI validation). `-Quick` reads the committed
   `mmpps_init.cpp` instead.
3. Bulk-seed the diff into `mmpps*_hints.toml`; codegen; drop candidates that
   logged stubs (data/gap-fill misidentifications); write the final hints
   file (`mmpps_hints.toml` for the shell, `mmpps_<module>_hints.toml` for
   the modules). Hints go FIRST in each manifest include list (config merge
   is last-wins; the curated files keep authority).

Notes learned by painful debugging (kept from the sibling ports):

- The CLI resolves every path relative to the manifest itself. Temp manifests
  (`.hints_tmp.toml`) must live at the repo root, and they are removed by the
  script.
- **Module scope regex**: this project's module hints pass matches
  `0x8[89AB]xxxxxxx` (bases span 0x88–0x8A). The dfkbl/mushi/dfkr versions
  matched only `0x88xxxxxx` — do not blindly diff/copy those scripts forward
  without checking this.
- XenonRecomp nested submodules (fmt/tomlplusplus/xxHash, …) appear as
  existing-but-empty dirs when not initialized; `bootstrap_xenon.ps1`
  handles them (verify with `git -C thirdparty/XenonRecomp submodule
  status` — no '-' prefixes).
- One codegen target per run, and `rexglue codegen` has crashed analyzing
  multiple module targets in one process (futari Iteration 20).
- Direct arg-array invocation (`& $Exe @Props`) beats `Start-Process`
  argument strings (quoted path mangling under some pwsh builds).

## Embedded-trap gate (`scripts/validate_codegen.ps1`)

Scans `generated/` for recompiler failure modes emitted as embedded traps
(`REX_FATAL("Unresolved call/branch ...")`, unregistered jumps, `// STUB:`),
plus the SDK's switch-case out-of-range `__builtin_trap()` sites
(informational only). Running after every codegen turn (`codegen_all.ps1`)
and in CI before Configure, it fails loudly on a new site identity with
file:line + guest addresses, instead of during playtesting.

Allow-list identities are `<target> <class> <guest addresses>` in
`scripts/trap_allowlist.txt` — intentionally EMPTY at project creation; a
new site fails the gate until fixed (hints/overrides) or triaged into the
file deliberately. See the sibling allowlists for what a triaged baseline
looks like (dfkr iter-8: 101 shell sites in the Cave-shell cluster families
`0x820A…`, `0x820D…`, `0x821C96–CE…`, `0x8235F…`; MMPPS' shell is the same
CAVE family, so a comparable shell-only baseline is expected here).

## Conventions

- Keep `TRACKING.md` current: each change to runtime/GPU/module behaviour
  gets an iteration entry (symptom → root cause → fix → status).
- Never commit `game_data/`, `user_data/`, `logs/`, `out/`, or binaries —
  see `.gitignore`.
- Do not add `codegen.stamp`/`codegen.partition.json`/`codegen.d` (they
  embed absolute paths; gitignored).
- Registering extra dynamic entrypoints = edit the `*_functions.toml`, not
  the generated `.cpp`.
- Do not kill the game process while diagnosing; let it crash or exit
  naturally and read `logs/mmpps.log` (`[error]`/`[critical]` are the
  actionable lines; `[warning]` is noise unless it correlates with a crash).
  The user drives the game UI.

## Rebuilding the SDK fork

Only if the runtime itself needs changing:

```
cd thirdparty/rexglue-sdk
# make changes, commit, push to the fork
cd ../..
git add thirdparty/rexglue-sdk
git commit -m "Bump SDK to <sha>"
```

Keep `generated/rexglue.cmake` in sync (it is regenerated by codegen, then
re-disabled for auto-codegen). Document SDK-side changes in `TRACKING.md`.

## Debugging

- `[error]`/`[critical]` in `logs/mmpps.log` are the actionable lines;
  `[warning]` is noise unless it correlates with a crash.
- The debug overlay is **F3**; settings are **F4**; fullscreen is **F11**.
- Crash RVAs: the faulting `mmpps_MPD*.dll` is loaded at image base
  `0x180000000` (host = `0x180000000 + RVA`); `0xC000001D` at a `UD2` is the
  recompiler's `__builtin_trap()` — usually a truncated jump table
  (`[[switch_tables]]` override class, see futari AGENTS "Crash diagnostics
  playbook" for the full recipe incl. the VA-layout image extraction trick).
- **Release module DLLs are stripped** (`llvm-nm` says "no symbols"), so a host
  RVA has to be mapped to a guest function by hand. Disassemble the exported
  `ReXModule_Register` (`llvm-objdump -d --start-address=0x180001000
  --stop-address=<ReXModule_GetImageInfo>`): every
  `registrar->SetFunction(0xGUEST, sub_GUEST)` is a `leaq <sub>(%rip), %r8`
  followed by `movl $0xGUEST, %edx`, which recovers the full host->guest
  function map (1611/1611 for MPD800). Then bisect the fault RVA into it.
- `[[switch_tables]]` entries are keyed by the **`bctr` instruction address**
  (`JumpTable::bctrAddress`), not by the jump-table address; `register` is the
  index register (e.g. `register = 5` for `switch (ctx.r5.u32)`). A mis-detected
  table typically shows up as a `switch` with a single bogus case whose
  operand is the *table-base* register — grep the generated code for
  `Switch case out of range` and check the case count and switch register.
- For crash triage against module ranges: fall back on this project's module
  base table (guest range → which `mmpps_MPD*.dll`).
