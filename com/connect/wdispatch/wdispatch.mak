# Microsoft Developer Studio Generated NMAKE File, Based on wdispatch.dsp
!IF "$(CFG)" == ""
CFG=wdispatch - Win32 Debug
!MESSAGE No configuration specified. Defaulting to wdispatch - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "wdispatch - Win32 Release" && "$(CFG)" != "wdispatch - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "wdispatch.mak" CFG="wdispatch - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "wdispatch - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "wdispatch - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 

!IF  "$(CFG)" == "wdispatch - Win32 Release"

OUTDIR=.\Release
INTDIR=.\Release
# Begin Custom Macros
OutDir=.\Release
# End Custom Macros

ALL : "$(OUTDIR)\wdispatch.exe"


CLEAN :
	-@erase "$(INTDIR)\MainFrm.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc60.idb"
	-@erase "$(INTDIR)\wdispatch.obj"
	-@erase "$(INTDIR)\wdispatch.pch"
	-@erase "$(INTDIR)\wdispatch.res"
	-@erase "$(INTDIR)\wdispatchDoc.obj"
	-@erase "$(INTDIR)\wdispatchView.obj"
	-@erase "$(OUTDIR)\wdispatch.exe"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP=cl.exe
CPP_PROJ=/nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)\wdispatch.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 

.c{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

MTL=midl.exe
MTL_PROJ=/nologo /D "NDEBUG" /mktyplib203 /win32 
RSC=rc.exe
RSC_PROJ=/l 0x40c /fo"$(INTDIR)\wdispatch.res" /d "NDEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\wdispatch.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=..\wdispatcher.obj ..\..\..\pub\library\meta.lib ..\..\asn\asn.lib ..\..\asnquick\qconnect.lib ..\connect.lib ..\supervisor.obj wsock32.lib /nologo /subsystem:windows /incremental:no /pdb:"$(OUTDIR)\wdispatch.pdb" /machine:I386 /out:"$(OUTDIR)\wdispatch.exe" 
LINK32_OBJS= \
	"$(INTDIR)\MainFrm.obj" \
	"$(INTDIR)\StdAfx.obj" \
	"$(INTDIR)\wdispatch.obj" \
	"$(INTDIR)\wdispatchDoc.obj" \
	"$(INTDIR)\wdispatchView.obj" \
	"$(INTDIR)\wdispatch.res"

"$(OUTDIR)\wdispatch.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "wdispatch - Win32 Debug"

OUTDIR=.\Debug
INTDIR=.\Debug
# Begin Custom Macros
OutDir=.\Debug
# End Custom Macros

ALL : "$(OUTDIR)\wdispatch.exe"


CLEAN :
	-@erase "$(INTDIR)\MainFrm.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc60.idb"
	-@erase "$(INTDIR)\vc60.pdb"
	-@erase "$(INTDIR)\wdispatch.obj"
	-@erase "$(INTDIR)\wdispatch.pch"
	-@erase "$(INTDIR)\wdispatch.res"
	-@erase "$(INTDIR)\wdispatchDoc.obj"
	-@erase "$(INTDIR)\wdispatchView.obj"
	-@erase "$(OUTDIR)\wdispatch.exe"
	-@erase "$(OUTDIR)\wdispatch.ilk"
	-@erase "$(OUTDIR)\wdispatch.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP=cl.exe
CPP_PROJ=/nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)\wdispatch.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /GZ /c 

.c{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

MTL=midl.exe
MTL_PROJ=/nologo /D "_DEBUG" /mktyplib203 /win32 
RSC=rc.exe
RSC_PROJ=/l 0x40c /fo"$(INTDIR)\wdispatch.res" /d "_DEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\wdispatch.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=..\wdispatcher.obj ..\supervisor.obj ..\..\asnquick\qconnect.lib ..\..\..\pub\library\meta.lib ..\..\asn\asn.lib ..\connect.lib wsock32.lib /nologo /subsystem:windows /incremental:yes /pdb:"$(OUTDIR)\wdispatch.pdb" /debug /machine:I386 /out:"$(OUTDIR)\wdispatch.exe" /pdbtype:sept 
LINK32_OBJS= \
	"$(INTDIR)\MainFrm.obj" \
	"$(INTDIR)\StdAfx.obj" \
	"$(INTDIR)\wdispatch.obj" \
	"$(INTDIR)\wdispatchDoc.obj" \
	"$(INTDIR)\wdispatchView.obj" \
	"$(INTDIR)\wdispatch.res"

"$(OUTDIR)\wdispatch.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 


!IF "$(NO_EXTERNAL_DEPS)" != "1"
!IF EXISTS("wdispatch.dep")
!INCLUDE "wdispatch.dep"
!ELSE 
!MESSAGE Warning: cannot find "wdispatch.dep"
!ENDIF 
!ENDIF 


!IF "$(CFG)" == "wdispatch - Win32 Release" || "$(CFG)" == "wdispatch - Win32 Debug"
SOURCE=.\MainFrm.cpp

"$(INTDIR)\MainFrm.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\wdispatch.pch"


SOURCE=.\StdAfx.cpp

!IF  "$(CFG)" == "wdispatch - Win32 Release"

CPP_SWITCHES=/nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)\wdispatch.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\wdispatch.pch" : $(SOURCE) "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ELSEIF  "$(CFG)" == "wdispatch - Win32 Debug"

CPP_SWITCHES=/nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)\wdispatch.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /GZ /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\wdispatch.pch" : $(SOURCE) "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ENDIF 

SOURCE=.\wdispatch.cpp

"$(INTDIR)\wdispatch.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\wdispatch.pch"


SOURCE=.\wdispatch.rc

"$(INTDIR)\wdispatch.res" : $(SOURCE) "$(INTDIR)"
	$(RSC) $(RSC_PROJ) $(SOURCE)


SOURCE=.\wdispatchDoc.cpp

"$(INTDIR)\wdispatchDoc.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\wdispatch.pch"


SOURCE=.\wdispatchView.cpp

"$(INTDIR)\wdispatchView.obj" : $(SOURCE) "$(INTDIR)" "$(INTDIR)\wdispatch.pch"



!ENDIF 

