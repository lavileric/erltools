META_DIR=$(ERLTOOLS_DIR)
INSTALL_DIR_SKIMMED=$(INSTALL_DIR)

.SUFFIXES: .ch .cc .C .c .h .o .cpp .d

INCLUDE_DIR= $(CROSS_INC_DIR) -I$(META_DIR)$(SEP)pub$(SEP)library \
		-I$(META_DIR)$(SEP)pub$(SEP)parser \
		-I$(META_DIR)$(SEP)pub$(SEP)cplusplu \
		-I$(META_DIR)$(SEP)pub$(SEP)chopb \
		-I$(META_DIR)$(SEP)pub$(SEP)metachop \
		$(STL_INC) $(INCLUDE_DIR_LOC) 

LIBRARY = $(META_DIR)$(SEP)pub$(SEP)library$(SEP)meta.$(LIB_SUF) $(LIB_SYS) $(LIB_PRIVATE_SYS)

STL_INC=-I$(META_DIR)$(SEP)stl2

ARFLAGS=rvU

#for solaris set ccflags
CCFLAGS= $(MACHFLAGS) $(OPTIM_FLAGS) $(MISC_C_FLAGS) $(C_WARNING) $(INCLUDE_DIR) $(OPT_FLAGS) $(OPT_FLAGS1) $(OPT_FLAGS_SYS)

.cc.o :
	$(C_PLUS) $(OUT_O)$@ -c $(CCFLAGS) $*.cc

.cc.obj :
	$(C_PLUS) $(OUT_O)$@ -c $(CCFLAGS) $*.cc

.c.obj :
	$(C_PLUS) $(OUT_O)$@ -c $(CCFLAGS) $*.c

.c.o :
	$(C_PLUS) $(OUT_O)$@ -c $(CCFLAGS) $*.c

.cpp.obj :
	$(C_PLUS) $(OUT_O)$@ -c $(CCFLAGS) $*.cpp

.cpp.o :
	$(C_PLUS) $(OUT_O)$@ -c $(CCFLAGS) $*.cpp

.cc.d :  
	gcc -g -E -MMD $(MACHFLAGS) $(LIBC2FLAGS) $(MISC_C_FLAGS) $(C_WARNING) $(INCLUDE_DIR) $(OPT_FLAGS) $(OPT_FLAGS1) $(OPT_FLAGS_SYS) $*.cc > /dev/null

# mettre -DI386 pour interactive

clean_inc :
	@-  $(RM) *.o 
	@-  $(RM) *.obj
	@-  $(RM) *.a
	@-  $(RM) *.lib
	@-  $(RM) *.so
	@-  $(RM) *.dll
	@-  $(RM) *.ll
	@-  $(RM) res.*
	@-  $(RM) *.exe
	@-  $(RM) -r compile.dir
	@-  $(RM) core
	@-  $(RM) res.*
	@-  $(RM) *.~*
	@-  $(RM) *.pdb
	@-  $(RM) *.*~
	@-  $(RM) *.viv
	@-  $(RM) libtmp*.*
	@-  $(RM) *.tds
	@-  $(RM) *.ilk
	@-  $(RM) *.lst
	@-  $(RM) *.bak
	@-  $(RM) *.mbt
	@-  $(RM) *.mrt
	@-  $(RM) *.obr
	@-  $(RM) *.ide
	@-  $(RM) *.exe
	@-  $(RM) *.obj
	@-  sh -c $(RM_UNIX)
	@-  $(RM) keep.erl
	@-  $(RM) core.*
	@-  $(RM) *.keep

clean_inc_appli : clean_inc
	@-  $(RM) m_done

all_test :
	@- for i in s* ; do \
			 echo $$i ; \
			 $$i > res.$$i 2>&1 ; diff res.$$i ref.$$i ; \
		   done
prof :
	$(MAKE) all "OPTIM_FLAGS=-g -pg" -f makefile.uni
optim :
	$(MAKE) all "OPTIM_FLAGS=-O2" -f makefile.uni
optim3 :
	$(MAKE) all "OPTIM_FLAGS=-O3" -f makefile.uni
norm :
	$(MAKE) all "OPTIM_FLAGS=" -f makefile.uni
optimg :
	$(MAKE) all "OPTIM_FLAGS=-O2 -g" -f makefile.uni
optim3g :
	$(MAKE) all "OPTIM_FLAGS=-O3 -g" -f makefile.uni
checker :
	$(MAKE) all "C_PLUS=checkerg++" -f makefile.uni
check :
	$(MAKE) all "OPTIM_FLAGS=-g" "LIB_SYS=-ldbmalloc" -f makefile.uni
solib :
	$(MAKE) shared "OPT_FLAGS_SYS=-fPIC" -f makefile.uni
soall : 
	$(MAKE) all "OPT_FLAGS_SYS=-fPIC" -f makefile.uni
METAOPT =

