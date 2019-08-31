@echo off

set opts=-FC -GR- -EHa- -nologo -Zi
set code=%cd%

IF NOT EXIST "%code%\..\build" (mkdir %code%\..\build)

pushd ..\build
cl %opts% %code%\string_constructor_generator.cpp -Fegenerator
popd
