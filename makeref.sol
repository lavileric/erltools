
# system
RM_UNIX="rm *.*~ *~ \#*\#"
LIB_SYS=-lnsl -lsocket
OUT_O=-o 

#compiler choice
MACHFLAGS=-DSUN -DSOLARIS -pipe -D_REENTRANT -D_IO_MT_SAFE_IO -D_PTHREADS
C_PLUS=g++
C_PLUS_LNK=g++ -lnsl -lsocket
C_WARNING =  -W -Wimplicit -Wreturn-type -Wswitch \
	   -Wcomment -Wformat -Wchar-subscripts -Wuninitialized
OPTIM_FLAGS=-g
C_FLAGS=$(OPTIM_FLAGS) $(C_WARNING)

SEP=/
OBJ_EXT=o 
LIB_SUF=a
