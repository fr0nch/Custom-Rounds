@echo off
REM build.bat - For Windows builds

if not exist "%PREFIX%\bin" mkdir "%PREFIX%\bin"

copy bin\libcustomrounds.dll "%PREFIX%\bin\" || exit 1
copy customrounds.pplugin "%PREFIX%\" || exit 1

exit 0
