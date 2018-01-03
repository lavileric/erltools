rem echo off
rem for main files
configfo foo.dos %1 > makefile.dos
configfo foo.bor %1 > makefile.bor
configfo foo.uni %1 > makefile.uni
configfo foo.met %1 > %1.met
configfo chopper.ch %1 > toto
del foo.*
del chopper.ch
rename toto chopper.ch
del config.sh
del makefile

rem for chop
configfo chop.fo %1 > chop.cc
configfo makefile.fo %1 > makefile.cho
configfo makefile.fod %1 > makefile.dch
configfo makefile.fob %1 > makefile.bch
del chop.fo
del makefile.fo
del makefile.fod
del makefile.fob



del config.sh
del conf
del config.bat
echo on
