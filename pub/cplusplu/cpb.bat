echo off
copy %1 keep.erl
cplus %1 > res.cpb
if errorlevel 1 goto fin
del %1
copy res.cpb %1
goto out
:fin
del res.cpb
:out
echo on
