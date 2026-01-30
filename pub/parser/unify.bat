@echo off
setlocal

rem ================================
rem Usage: compare.bat "file1" "file2"
rem ================================

if "%~2"=="" (
  echo Usage: %~nx0 "file1" "file2"
  exit /b 2
)

set "FILE1=%~1"
set "FILE2=%~2"

if not exist "%FILE1%" (
  echo [ERROR] File not found: "%FILE1%"
  exit /b 2
)

if not exist "%FILE2%" (
  echo [COPY] Destination missing. Copying...
  copy "%FILE1%" "%FILE2%" /Y >nul
  exit /b 1
)

:: Binary compare
fc.exe  /b "%FILE1%" "%FILE2%" >nul
set "RC=%ERRORLEVEL%"

:: Check the exit code (ErrorLevel)
if %errorlevel% neq 0 (
    echo [DIFF] Files are different. Updating...

  copy "%FILE1%" "%FILE2%" /Y >nul
  exit /b 1
) else (

  echo [SAME] Files are identical.
  exit /b 0
)
 

