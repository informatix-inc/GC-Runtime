@echo off
call C:/progra~2/micros~1.0/vc/bin/vcvars32.bat 
cd %~dp0
C:/cygwin64/bin/bash.exe -c 'echo VS_PATH=\"$PATH\" > set-vs-env.sh
C:/cygwin64/bin/bash.exe -c 'echo VS_INCLUDE=\"$INCLUDE \" >> set-vs-env.sh
C:/cygwin64/bin/bash.exe -c 'echo VS_LIB=\"$LIB \" >> set-vs-env.sh
C:/cygwin64/bin/bash.exe -c 'echo VCINSTALLDIR=\"$VCINSTALLDIR \" >> set-vs-env.sh
C:/cygwin64/bin/bash.exe -c 'echo WindowsSdkDir=\"$WindowsSdkDir \" >> set-vs-env.sh
C:/cygwin64/bin/bash.exe -c 'echo WINDOWSSDKDIR=\"$WINDOWSSDKDIR \" >> set-vs-env.sh
