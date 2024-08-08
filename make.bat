@echo off
set SRC_FILES_V=.\src\netcat.v
set OUT_NAME=.\bin\nc.exe
set CC1=v

echo [*] Compile to: %OUT_NAME%.
%CC1% %SRC_FILES_V% -o %OUT_NAME%