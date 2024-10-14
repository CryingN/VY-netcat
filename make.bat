@echo off
set SRC_FILES_V=.\src\netcat.v
set OUT_NAME=.\bin\nc.exe
set CC1=v
set BIN_DIR=.\bin

if not exist "%BIN_DIR%" (
    mkdir "%BIN_DIR%"
)
echo [*] Compile to: %OUT_NAME%.
%CC1% %SRC_FILES_V% -o %OUT_NAME%