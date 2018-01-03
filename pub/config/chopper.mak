.c.obj :
   cl -c -AL -Od -Zi -G2 $*.c
#    cl -c -AL -Ot -Gs -G2 $*.c

config.c : config.met
	metagen config.met

config.obj : config.c config.h

chopper.c : chopper.ch
	metachop chopper.ch > chopper.c

chopper.obj : chopper.c token.h

chopper.exe : \meta\metachop\metacho1.lib \meta\metachop\metacho2.lib\
  \meta\metachop\metagen.lib config.obj chopper.obj \
	link/CO/ST:20000 @config.lnk



