# Microsoft Developer Studio Generated NMAKE File, Format Version 4.20
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

!IF "$(CFG)" == ""
CFG=LineApplication - Win32 Debug
!MESSAGE No configuration specified.  Defaulting to LineApplication - Win32\
 Debug.
!ENDIF 

!IF "$(CFG)" != "LineApplication - Win32 Release" && "$(CFG)" !=\
 "LineApplication - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE on this makefile
!MESSAGE by defining the macro CFG on the command line.  For example:
!MESSAGE 
!MESSAGE NMAKE /f "LineApplication.mak" CFG="LineApplication - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "LineApplication - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "LineApplication - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 
################################################################################
# Begin Project
# PROP Target_Last_Scanned "LineApplication - Win32 Debug"
RSC=rc.exe
MTL=mktyplib.exe
CPP=cl.exe

!IF  "$(CFG)" == "LineApplication - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
OUTDIR=.\Release
INTDIR=.\Release

ALL : "$(OUTDIR)\LineApplication.exe" "$(OUTDIR)\LineApplication.pch"

CLEAN : 
	-@erase "$(INTDIR)\GraphicFactory.obj"
	-@erase "$(INTDIR)\GraphicLine.obj"
	-@erase "$(INTDIR)\GraphicObject.obj"
	-@erase "$(INTDIR)\Line.obj"
	-@erase "$(INTDIR)\LineApplication.obj"
	-@erase "$(INTDIR)\LineApplication.pch"
	-@erase "$(INTDIR)\LineApplication.res"
	-@erase "$(INTDIR)\LineApplicationDoc.obj"
	-@erase "$(INTDIR)\LineApplicationFactory.obj"
	-@erase "$(INTDIR)\LineApplicationView.obj"
	-@erase "$(INTDIR)\MainFrm.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(OUTDIR)\LineApplication.exe"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /c
# ADD CPP /nologo /MD /W3 /GR /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /c
# SUBTRACT CPP /YX /Yc /Yu
CPP_PROJ=/nologo /MD /W3 /GR /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D\
 "_AFXDLL" /D "_MBCS" /Fo"$(INTDIR)/" /c 
CPP_OBJS=.\Release/
CPP_SBRS=.\.
# ADD BASE MTL /nologo /D "NDEBUG" /win32
# ADD MTL /nologo /D "NDEBUG" /win32
MTL_PROJ=/nologo /D "NDEBUG" /win32 
# ADD BASE RSC /l 0x409 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x409 /d "NDEBUG" /d "_AFXDLL"
RSC_PROJ=/l 0x409 /fo"$(INTDIR)/LineApplication.res" /d "NDEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
BSC32_FLAGS=/nologo /o"$(OUTDIR)/LineApplication.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386
LINK32_FLAGS=/nologo /subsystem:windows /incremental:no\
 /pdb:"$(OUTDIR)/LineApplication.pdb" /machine:I386\
 /out:"$(OUTDIR)/LineApplication.exe" 
LINK32_OBJS= \
	"$(INTDIR)\GraphicFactory.obj" \
	"$(INTDIR)\GraphicLine.obj" \
	"$(INTDIR)\GraphicObject.obj" \
	"$(INTDIR)\Line.obj" \
	"$(INTDIR)\LineApplication.obj" \
	"$(INTDIR)\LineApplication.res" \
	"$(INTDIR)\LineApplicationDoc.obj" \
	"$(INTDIR)\LineApplicationFactory.obj" \
	"$(INTDIR)\LineApplicationView.obj" \
	"$(INTDIR)\MainFrm.obj" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\LineApplication.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "LineApplication - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
OUTDIR=.\Debug
INTDIR=.\Debug

ALL : "$(OUTDIR)\LineApplication.exe" "$(OUTDIR)\LineApplication.pch"\
 "$(OUTDIR)\LineApplication.bsc"

CLEAN : 
	-@erase "$(INTDIR)\GraphicFactory.obj"
	-@erase "$(INTDIR)\GraphicFactory.sbr"
	-@erase "$(INTDIR)\GraphicLine.obj"
	-@erase "$(INTDIR)\GraphicLine.sbr"
	-@erase "$(INTDIR)\GraphicObject.obj"
	-@erase "$(INTDIR)\GraphicObject.sbr"
	-@erase "$(INTDIR)\Line.obj"
	-@erase "$(INTDIR)\Line.sbr"
	-@erase "$(INTDIR)\LineApplication.obj"
	-@erase "$(INTDIR)\LineApplication.pch"
	-@erase "$(INTDIR)\LineApplication.res"
	-@erase "$(INTDIR)\LineApplication.sbr"
	-@erase "$(INTDIR)\LineApplicationDoc.obj"
	-@erase "$(INTDIR)\LineApplicationDoc.sbr"
	-@erase "$(INTDIR)\LineApplicationFactory.obj"
	-@erase "$(INTDIR)\LineApplicationFactory.sbr"
	-@erase "$(INTDIR)\LineApplicationView.obj"
	-@erase "$(INTDIR)\LineApplicationView.sbr"
	-@erase "$(INTDIR)\MainFrm.obj"
	-@erase "$(INTDIR)\MainFrm.sbr"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\StdAfx.sbr"
	-@erase "$(INTDIR)\vc40.idb"
	-@erase "$(INTDIR)\vc40.pdb"
	-@erase "$(OUTDIR)\LineApplication.bsc"
	-@erase "$(OUTDIR)\LineApplication.exe"
	-@erase "$(OUTDIR)\LineApplication.ilk"
	-@erase "$(OUTDIR)\LineApplication.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /c
# ADD CPP /nologo /MDd /W3 /Gm /GR /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /FR /c
# SUBTRACT CPP /YX /Yc /Yu
CPP_PROJ=/nologo /MDd /W3 /Gm /GR /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D\
 "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /FR"$(INTDIR)/" /Fo"$(INTDIR)/"\
 /Fd"$(INTDIR)/" /c 
CPP_OBJS=.\Debug/
CPP_SBRS=.\Debug/
# ADD BASE MTL /nologo /D "_DEBUG" /win32
# ADD MTL /nologo /D "_DEBUG" /win32
MTL_PROJ=/nologo /D "_DEBUG" /win32 
# ADD BASE RSC /l 0x409 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x409 /d "_DEBUG" /d "_AFXDLL"
RSC_PROJ=/l 0x409 /fo"$(INTDIR)/LineApplication.res" /d "_DEBUG" /d "_AFXDLL" 
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
BSC32_FLAGS=/nologo /o"$(OUTDIR)/LineApplication.bsc" 
BSC32_SBRS= \
	"$(INTDIR)\GraphicFactory.sbr" \
	"$(INTDIR)\GraphicLine.sbr" \
	"$(INTDIR)\GraphicObject.sbr" \
	"$(INTDIR)\Line.sbr" \
	"$(INTDIR)\LineApplication.sbr" \
	"$(INTDIR)\LineApplicationDoc.sbr" \
	"$(INTDIR)\LineApplicationFactory.sbr" \
	"$(INTDIR)\LineApplicationView.sbr" \
	"$(INTDIR)\MainFrm.sbr" \
	"$(INTDIR)\StdAfx.sbr"

"$(OUTDIR)\LineApplication.bsc" : "$(OUTDIR)" $(BSC32_SBRS)
    $(BSC32) @<<
  $(BSC32_FLAGS) $(BSC32_SBRS)
<<

LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386
LINK32_FLAGS=/nologo /subsystem:windows /incremental:yes\
 /pdb:"$(OUTDIR)/LineApplication.pdb" /debug /machine:I386\
 /out:"$(OUTDIR)/LineApplication.exe" 
LINK32_OBJS= \
	"$(INTDIR)\GraphicFactory.obj" \
	"$(INTDIR)\GraphicLine.obj" \
	"$(INTDIR)\GraphicObject.obj" \
	"$(INTDIR)\Line.obj" \
	"$(INTDIR)\LineApplication.obj" \
	"$(INTDIR)\LineApplication.res" \
	"$(INTDIR)\LineApplicationDoc.obj" \
	"$(INTDIR)\LineApplicationFactory.obj" \
	"$(INTDIR)\LineApplicationView.obj" \
	"$(INTDIR)\MainFrm.obj" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\LineApplication.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 

.c{$(CPP_OBJS)}.obj:
   $(CPP) $(CPP_PROJ) $<  

.cpp{$(CPP_OBJS)}.obj:
   $(CPP) $(CPP_PROJ) $<  

.cxx{$(CPP_OBJS)}.obj:
   $(CPP) $(CPP_PROJ) $<  

.c{$(CPP_SBRS)}.sbr:
   $(CPP) $(CPP_PROJ) $<  

.cpp{$(CPP_SBRS)}.sbr:
   $(CPP) $(CPP_PROJ) $<  

.cxx{$(CPP_SBRS)}.sbr:
   $(CPP) $(CPP_PROJ) $<  

################################################################################
# Begin Target

# Name "LineApplication - Win32 Release"
# Name "LineApplication - Win32 Debug"

!IF  "$(CFG)" == "LineApplication - Win32 Release"

!ELSEIF  "$(CFG)" == "LineApplication - Win32 Debug"

!ENDIF 

################################################################################
# Begin Source File

SOURCE=.\LineApplication.cpp
DEP_CPP_LINEA=\
	".\GraphicFactory.h"\
	".\GraphicObject.h"\
	".\LineApplication.h"\
	".\LineApplicationDoc.h"\
	".\LineApplicationFactory.h"\
	".\LineApplicationView.h"\
	".\MainFrm.h"\
	".\StdAfx.h"\
	

!IF  "$(CFG)" == "LineApplication - Win32 Release"


"$(INTDIR)\LineApplication.obj" : $(SOURCE) $(DEP_CPP_LINEA) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "LineApplication - Win32 Debug"


"$(INTDIR)\LineApplication.obj" : $(SOURCE) $(DEP_CPP_LINEA) "$(INTDIR)"

"$(INTDIR)\LineApplication.sbr" : $(SOURCE) $(DEP_CPP_LINEA) "$(INTDIR)"


!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\StdAfx.cpp
DEP_CPP_STDAF=\
	".\StdAfx.h"\
	

!IF  "$(CFG)" == "LineApplication - Win32 Release"

# ADD CPP /Yc"stdafx.h"

BuildCmds= \
	$(CPP) /nologo /MD /W3 /GR /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D\
 "_AFXDLL" /D "_MBCS" /Fp"$(INTDIR)/LineApplication.pch" /Yc"stdafx.h"\
 /Fo"$(INTDIR)/" /c $(SOURCE) \
	

"$(INTDIR)\StdAfx.obj" : $(SOURCE) $(DEP_CPP_STDAF) "$(INTDIR)"
   $(BuildCmds)

"$(INTDIR)\LineApplication.pch" : $(SOURCE) $(DEP_CPP_STDAF) "$(INTDIR)"
   $(BuildCmds)

!ELSEIF  "$(CFG)" == "LineApplication - Win32 Debug"

# ADD CPP /Yc"stdafx.h"

BuildCmds= \
	$(CPP) /nologo /MDd /W3 /Gm /GR /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D\
 "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /FR"$(INTDIR)/"\
 /Fp"$(INTDIR)/LineApplication.pch" /Yc"stdafx.h" /Fo"$(INTDIR)/"\
 /Fd"$(INTDIR)/" /c $(SOURCE) \
	

"$(INTDIR)\StdAfx.obj" : $(SOURCE) $(DEP_CPP_STDAF) "$(INTDIR)"
   $(BuildCmds)

"$(INTDIR)\StdAfx.sbr" : $(SOURCE) $(DEP_CPP_STDAF) "$(INTDIR)"
   $(BuildCmds)

"$(INTDIR)\LineApplication.pch" : $(SOURCE) $(DEP_CPP_STDAF) "$(INTDIR)"
   $(BuildCmds)

!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\MainFrm.cpp
DEP_CPP_MAINF=\
	".\LineApplication.h"\
	".\MainFrm.h"\
	".\StdAfx.h"\
	

!IF  "$(CFG)" == "LineApplication - Win32 Release"


"$(INTDIR)\MainFrm.obj" : $(SOURCE) $(DEP_CPP_MAINF) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "LineApplication - Win32 Debug"


"$(INTDIR)\MainFrm.obj" : $(SOURCE) $(DEP_CPP_MAINF) "$(INTDIR)"

"$(INTDIR)\MainFrm.sbr" : $(SOURCE) $(DEP_CPP_MAINF) "$(INTDIR)"


!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\LineApplicationView.cpp
DEP_CPP_LINEAP=\
	".\GraphicFactory.h"\
	".\GraphicObject.h"\
	".\Line.h"\
	".\LineApplication.h"\
	".\LineApplicationDoc.h"\
	".\LineApplicationView.h"\
	".\StdAfx.h"\
	

!IF  "$(CFG)" == "LineApplication - Win32 Release"


"$(INTDIR)\LineApplicationView.obj" : $(SOURCE) $(DEP_CPP_LINEAP) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "LineApplication - Win32 Debug"


"$(INTDIR)\LineApplicationView.obj" : $(SOURCE) $(DEP_CPP_LINEAP) "$(INTDIR)"

"$(INTDIR)\LineApplicationView.sbr" : $(SOURCE) $(DEP_CPP_LINEAP) "$(INTDIR)"


!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\LineApplication.rc
DEP_RSC_LINEAPP=\
	".\res\LineApplication.ico"\
	".\res\LineApplication.rc2"\
	".\res\LineApplicationDoc.ico"\
	

"$(INTDIR)\LineApplication.res" : $(SOURCE) $(DEP_RSC_LINEAPP) "$(INTDIR)"
   $(RSC) $(RSC_PROJ) $(SOURCE)


# End Source File
################################################################################
# Begin Source File

SOURCE=.\LineApplicationFactory.cpp
DEP_CPP_LINEAPPL=\
	".\GraphicFactory.h"\
	".\GraphicLine.h"\
	".\GraphicObject.h"\
	".\Line.h"\
	".\LineApplicationFactory.h"\
	

!IF  "$(CFG)" == "LineApplication - Win32 Release"


"$(INTDIR)\LineApplicationFactory.obj" : $(SOURCE) $(DEP_CPP_LINEAPPL)\
 "$(INTDIR)"


!ELSEIF  "$(CFG)" == "LineApplication - Win32 Debug"


"$(INTDIR)\LineApplicationFactory.obj" : $(SOURCE) $(DEP_CPP_LINEAPPL)\
 "$(INTDIR)"

"$(INTDIR)\LineApplicationFactory.sbr" : $(SOURCE) $(DEP_CPP_LINEAPPL)\
 "$(INTDIR)"


!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\GraphicFactory.cpp
DEP_CPP_GRAPH=\
	".\GraphicFactory.h"\
	

!IF  "$(CFG)" == "LineApplication - Win32 Release"


"$(INTDIR)\GraphicFactory.obj" : $(SOURCE) $(DEP_CPP_GRAPH) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "LineApplication - Win32 Debug"


"$(INTDIR)\GraphicFactory.obj" : $(SOURCE) $(DEP_CPP_GRAPH) "$(INTDIR)"

"$(INTDIR)\GraphicFactory.sbr" : $(SOURCE) $(DEP_CPP_GRAPH) "$(INTDIR)"


!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\Line.cpp
DEP_CPP_LINE_=\
	".\Line.h"\
	

!IF  "$(CFG)" == "LineApplication - Win32 Release"


"$(INTDIR)\Line.obj" : $(SOURCE) $(DEP_CPP_LINE_) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "LineApplication - Win32 Debug"


"$(INTDIR)\Line.obj" : $(SOURCE) $(DEP_CPP_LINE_) "$(INTDIR)"

"$(INTDIR)\Line.sbr" : $(SOURCE) $(DEP_CPP_LINE_) "$(INTDIR)"


!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\GraphicLine.cpp
DEP_CPP_GRAPHI=\
	".\GraphicLine.h"\
	".\GraphicObject.h"\
	".\Line.h"\
	

!IF  "$(CFG)" == "LineApplication - Win32 Release"


"$(INTDIR)\GraphicLine.obj" : $(SOURCE) $(DEP_CPP_GRAPHI) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "LineApplication - Win32 Debug"


"$(INTDIR)\GraphicLine.obj" : $(SOURCE) $(DEP_CPP_GRAPHI) "$(INTDIR)"

"$(INTDIR)\GraphicLine.sbr" : $(SOURCE) $(DEP_CPP_GRAPHI) "$(INTDIR)"


!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\GraphicObject.cpp
DEP_CPP_GRAPHIC=\
	".\GraphicObject.h"\
	

!IF  "$(CFG)" == "LineApplication - Win32 Release"


"$(INTDIR)\GraphicObject.obj" : $(SOURCE) $(DEP_CPP_GRAPHIC) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "LineApplication - Win32 Debug"


"$(INTDIR)\GraphicObject.obj" : $(SOURCE) $(DEP_CPP_GRAPHIC) "$(INTDIR)"

"$(INTDIR)\GraphicObject.sbr" : $(SOURCE) $(DEP_CPP_GRAPHIC) "$(INTDIR)"


!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\LineApplicationDoc.cpp
DEP_CPP_LINEAPPLI=\
	".\Line.h"\
	".\LineApplicationDoc.h"\
	".\StdAfx.h"\
	

!IF  "$(CFG)" == "LineApplication - Win32 Release"


"$(INTDIR)\LineApplicationDoc.obj" : $(SOURCE) $(DEP_CPP_LINEAPPLI) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "LineApplication - Win32 Debug"


"$(INTDIR)\LineApplicationDoc.obj" : $(SOURCE) $(DEP_CPP_LINEAPPLI) "$(INTDIR)"

"$(INTDIR)\LineApplicationDoc.sbr" : $(SOURCE) $(DEP_CPP_LINEAPPLI) "$(INTDIR)"


!ENDIF 

# End Source File
# End Target
# End Project
################################################################################
