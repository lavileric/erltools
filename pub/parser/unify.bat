echo off
diff %1 %2
if errorlevel 1 copy %1 %2
echo on
