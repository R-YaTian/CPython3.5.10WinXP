@echo off
rem This script adds the latest available tools to the path for the current
rem command window. However, most builds of Python will ignore the version
rem of the tools on PATH and use PlatformToolset instead. Ideally, both sets of
rem tools should be the same version to avoid potential conflicts.
rem
rem To build Python with an earlier toolset, pass "/p:PlatformToolset=v100" (or
rem 'v110', 'v120' or 'v140') to the build script.

echo Build environments: x86, amd64, x86_amd64
echo.

call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat" %*
