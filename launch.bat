@echo off
setlocal
title MMPPS Recomp

set "ROOT=%~dp0"
set "EXEDIR=%ROOT%out\build\win-amd64-release"
set "EXE=%EXEDIR%\mmpps.exe"

if not exist "%EXE%" (
  echo.
  echo mmpps.exe was not found at:
  echo   %EXE%
  echo.
  echo Build it first:
  echo   cmake --preset win-amd64-release
  echo   cmake --build --preset win-amd64-release --parallel
  echo.
  pause
  exit /b 1
)

rem Stage the settings template next to the exe (exe_dir = the live config
rem the game reads and writes). Copy-if-missing: never overwrite a locally
rem edited / F4-saved live file. The build also does this via POST_BUILD.
if not exist "%EXEDIR%\mmpps.toml" (
  copy /Y "%ROOT%mmpps.toml" "%EXEDIR%\mmpps.toml" >nul
  echo Staged mmpps.toml into %EXEDIR%
)

if not exist "%ROOT%game_data\default.xex" (
  echo.
  echo game_data\default.xex was not found.
  echo Put your extracted Muchi Muchi Pork ^& Pink Sweets disc data in "%ROOT%game_data\". See README.md.
  echo.
  pause
  exit /b 1
)

start "" /D "%ROOT%" "%EXE%" ^
  --game_data_root="%ROOT%game_data" ^
  --user_data_root="%ROOT%user_data"
exit /b 0
