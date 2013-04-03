echo -----------------------------------------------------------------------

del /Q out.hex

..\TOOLS\nl2hex 0x4000 0x50 0.nlt 1.nlt 2.nlt 3.nlt 4.nlt 5.nlt 6.nlt 7.nlt 8.nlt 9.nlt 10.nlt

pause

..\TOOLS\conv18.exe out.hex ..\HEX\app.hex
del /Q out.hex
