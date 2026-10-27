# One-off bootstrap triage loop: run the trap gate, register every unique
# unresolved_call/unresolved_branch TARGET address as a function in the target
# TOML (dfkbr iter-9 precedent), regenerate, repeat until the site set stops
# changing. Any site that survives the loop gets triaged into the allowlist
# deliberately - fixed up manually, not by this script.
[CmdletBinding()]
param(
    [string]$Rexglue = "",
    [int]$MaxRounds = 4
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $PSScriptRoot
Set-Location $root

$cliSearch = @('thirdparty\rexglue-sdk\out\win-amd64\rexglue.exe', 'rexglue.exe') |
    Where-Object { Test-Path (Join-Path $root $_) } | Select-Object -First 1
$Rexglue = Join-Path $root $cliSearch
if (-not $Rexglue) { throw "rexglue CLI not found" }

$targets = @('default', 'MPD700', 'MPD710', 'MPD790', 'MPD800', 'MPD810')
$tomlFor = @{
    'default' = 'mmpps_functions.toml'
    'MPD700'  = 'mmpps_MPD700_functions.toml'
    'MPD710'  = 'mmpps_MPD710_functions.toml'
    'MPD790'  = 'mmpps_MPD790_functions.toml'
    'MPD800'  = 'mmpps_MPD800_functions.toml'
    'MPD810'  = 'mmpps_MPD810_functions.toml'
}

foreach ($round in 1..$MaxRounds) {
    Write-Host "===== triage round $round ====="
    $sites = New-Object System.Collections.Generic.List[object]
    foreach ($t in $targets) {
        $dir = Join-Path $root "generated\$t"
        if (-not (Test-Path $dir)) { throw "missing $dir" }
        $hits = Get-ChildItem $dir -Recurse -Include *.cpp -File |
            Select-String -Pattern 'REX_FATAL\("Unresolved (call|branch) from 0x[0-9A-Fa-f]{8} to 0x[0-9A-Fa-f]{8}'
        foreach ($h in $hits) {
            $addrs = foreach ($m in [regex]::Matches($h.Line, '0x([0-9A-Fa-f]{8})')) {
                ('0x' + $m.Groups[1].Value.ToLower())
            }
            $sites.Add([pscustomobject]@{
                Target = $t
                Class  = $h.Matches[0].Groups[1].Value
                From   = $addrs[0]
                To     = $addrs[1]
            })
        }
    }
    if ($sites.Count -eq 0) {
        Write-Host "[ok] no unresolved sites left"
        break
    }

    # Register every unique target address (== the reachable block that the
    # analyzers refuse to promote) in the owning target's TOML.
    $patches = @{}
    foreach ($s in $sites) {
        if (-not $patches.ContainsKey($s.Target)) { $patches[$s.Target] = @() }
        $patches[$s.Target] += $s.To
    }
    foreach ($t in $patches.Keys) {
        $toml = Join-Path $root $tomlFor[$t]
        $existing = if (Test-Path $toml) { Get-Content $toml -Raw } else { '' }
        $addrs = $patches[$t] | Sort-Object -Unique
        Write-Host "  $t -> registering $($addrs.Count) target(s) in $($tomlFor[$t])"
        $block = foreach ($a in $addrs) {
            # Ordinal Contains: -like treats '[' as a wildcard character class,
            # which silently matched everything and registered nothing.
            if ((-not $existing) -or (-not $existing.Contains("[functions.`"$a`"]"))) {
                ""
                "# triage bootstrap round $round - unresolved target (dfkbr iter-9 precedent)"
                "[functions.`"$a`"]"
                ('name = "sub_' + $a.Substring(2) + '"')
                ""
            }
        }
        if ($block) { Add-Content -Path $toml -Value ($block -join "`n") }
    }

    # Determine affected modules: 'default' sites are regenerated with every
    # codegen run; modules need their own --target.
    $mods = $patches.Keys | Where-Object { $_ -ne 'default' }
    Write-Host "  regenerating: $($patches.Keys -join ', ')"
    if ($mods) {
        foreach ($m in $mods) {
            Write-Host "  === codegen: $m ==="
            & $Rexglue codegen mmpps_manifest.toml --target $m 2> $null | Out-Null
            if ($LASTEXITCODE -ne 0) { throw "codegen failed for $m (exit $LASTEXITCODE)" }
        }
    } else {
        Write-Host "  === codegen: (default only) ==="
        & $Rexglue codegen mmpps_manifest.toml --target MPD700 2> $null | Out-Null
        if ($LASTEXITCODE -ne 0) { throw "codegen failed for default (exit $LASTEXITCODE)" }
    }
}

# Restore the hand-merged glue files after the raw codegen runs.
git checkout -- generated/rexglue.cmake generated/default/dll_targets.cmake generated/default/module_registry.cpp
if ($LASTEXITCODE -ne 0) { throw "git checkout failed" }
Write-Host "glue files restored; run scripts\validate_codegen.ps1 to assess the surviving sites"
