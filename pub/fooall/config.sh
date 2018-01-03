#!/bin/sh
#for main files
configfo foo.uni $1 > makefile.uni
configfo foo.dos $1 > makefile.dos
configfo foo.bor $1 > makefile.bor
configfo foo.met $1 > $1.met
configfo chopper.ch $1 > toto
rm foo.*
mv toto chopper.ch
rm config.sh
rm makefile
ln -s makefile.uni makefile

#for chop
configfo chop.fo $1 > chop.cc
configfo makefile.fo $1 > makefile.cho
configfo makefile.fod $1 > makefile.dch
configfo makefile.fob $1 > makefile.bch
rm chop.fo makefile.fo makefile.fod makefile.fob

rm  config.bat config.sh conf


