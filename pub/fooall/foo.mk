.c.o:
	cc -c -g -w -DSONY -DSUN -I/usr/local/lib/metagen $*.c

all : foo

foo.c : foo.met
	metagen foo.met

foo.h : foo.met
	metagen foo.met

foo.o : foo.c foo.h

chopper.c : chopper.ch foo.h
	metachop chopper.ch > chopper.c

chopper.o : chopper.c /usr/local/lib/metagen/token.h

foo : chopper.o foo.o /usr/local/lib/metagen/metagen.a
	cc -g -o foo foo.o chopper.o /usr/local/lib/metagen/metagen.a




