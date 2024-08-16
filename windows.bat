@echo off
setlocal

if not exist "external" (
    echo error: missing 'external' library directory
    exit /b 1
)

pushd "%~dp0" > NUL

mkdir "build" > NUL 2> NUL
pushd "build" > NUL

:: Compiler options
::
SET COMPILER_COMMON=-nologo -I"..\external\include" -W4

SET COMPILER_DEBUG=%COMPILER_COMMON% -Od -Zi
SET COMPILER_RELEASE=%COMPILER_COMMON% -O2

:: Linker options
::
SET LINKER_COMMON=-LIBPATH:"..\external\lib" SDL2d.lib -SUBSYSTEM:Windows opengl32.lib

SET LINKER_DEBUG=%LINKER_COMMON% SDL2d.lib
SET LINKER_RELEASE=%LINKER_COMMON% SDL2.lib

:: Build game debug
cl %COMPILER_DEBUG% "..\gmtk\gmtk.c" -Fe"gmtkd.exe" -link %LINKER_DEBUG%

:: Build game release
:: cl %COMPILER_RELEASE% "..\gmtk\gmtk.c" -Fe"gmtk.exe" -link %LINKER_RELEASE%

popd > NUL

endlocal
