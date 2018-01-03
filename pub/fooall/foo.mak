#COPT = -AL -Ozx -Gs -G3 -I..\parser -I..\metachop
COPT = -AL -Od -f -Zi -I..\parser -I..\meta\metachop
#LINKOPT = /F/PACKC/ST:20000 @foo.lnk
LINKOPT = /CO/LI/ST:20000  @foo.lnk
#METAOPT =
METAOPT = -f

.c.obj :
	 cl -c $(COPT) $*.c

.cpp.obj :
   cl -c $(COPT) -I..\parser $*.cpp

all : m_done foo.exe

clean :
		- del *.obj
	- del foo.exe
	- del foo.c
	- del foo0.c
	- del *.bak
	- del chopper.c
		- del m_done

foo.obj : foo.c foo.h

foo0.obj : foo0.c foo.h

m_done : foo.met
	mkdir compile.dir
	copy foo.met compile.dir
	cd compile.dir
	metagen $(METAOPT) foo.met
	- unify foo.h ..\foo.h
	- unify foo.c ..\foo.c
    - unify foo0.c ..\foo0.c
	cd ..
	- rm -r compile.dir
	echo "ok" > m_done

chopper.c : chopper.ch
	metachop chopper.ch > chopper.c

chopper.obj : chopper.c ..\library\token.h

foo.exe : ..\metachop\metacho1.lib ..\metachop\metacho2.lib\
  ..\parser\metagen.lib foo.obj foo0.obj chopper.obj
	link/CO/ST:20000 @foo.lnk



