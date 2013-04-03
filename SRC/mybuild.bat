echo ------------------------------------------------------------ lol ololo --------

del /Q out.hex

..\TOOLS\nl2hex 0x4000 0x50 0.nlt

pause

..\TOOLS\conv18.exe out.hex ..\HEX\app.hex
del /Q out.hex