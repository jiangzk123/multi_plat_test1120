rem ******************start PreLaunchTasks******************
rem ******************start buildDynamicLib******************
cmake -G "MinGW Makefiles"  ../lib/addlib/CMakeLists.txt  -B ../lib/addlib/build
cmake --build ../lib/addlib/build
rem ******************start buildMain******************
cmake -G "MinGW Makefiles" ./CMakeLists.txt -B  ./build
cmake --build ./build
rem ******************start copyFiles******************
xcopy /Y /I ".\..\lib\addlib\build\libadd.dll"  ".\build"
rem set "workspace=F:\prj1115\print"
rem xcopy /Y /I "%workspace%\..\lib\addlib\build\libadd.dll"  "%workspace%\build"
rem ******************end PreLaunchTasks******************