//=============================================================================
// ReXGlue Generated - mmpps Module Registry
//
// HAND-MERGED: codegen (--target <name>) rewrites this file for the LAST
// target only; the committed version registers all five module DLLs.
// scripts/codegen_all.ps1 restores it (git checkout --) after each run.
//
// Registered names are the CLI's normalized (lowercased) manifest guest
// paths. The game loads "game:\MPDxxx.bin" (uppercase on-disc filenames);
// the SDK fork matches by filename (FoundRecompiledModule fix) - confirm at
// first playtest whether the casing needs a project-side fix.
//=============================================================================

#include <rex/system/kernel_state.h>

void RegisterRecompiledModules(rex::system::KernelState* kernel_state) {

  kernel_state->RegisterRecompiledModule(
      "mpd700.bin",
      "mpd700.bin",
      "mmpps_MPD700");

  kernel_state->RegisterRecompiledModule(
      "mpd710.bin",
      "mpd710.bin",
      "mmpps_MPD710");

  kernel_state->RegisterRecompiledModule(
      "mpd790.bin",
      "mpd790.bin",
      "mmpps_MPD790");

  kernel_state->RegisterRecompiledModule(
      "mpd800.bin",
      "mpd800.bin",
      "mmpps_MPD800");

  kernel_state->RegisterRecompiledModule(
      "mpd810.bin",
      "mpd810.bin",
      "mmpps_MPD810");

}
