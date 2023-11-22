echo ******************start PreLaunchTasks******************
echo ******************start buildDynamicLib******************
mkdir -p ../lib/addlib/build
cd ../lib/addlib/build
# 构建
cmake  ..
#编译生成
cmake --build .
echo ******************start buildMain******************
cd ../../../print
mkdir -p ./build
cd ./build
cmake ..
cmake --build .
echo ******************start copyFiles******************
cp -f  "../../lib/addlib/build/libadd.so"  .
# echo set "workspace=F:\prj1115\print"
# echo xcopy /Y /I "%workspace%\..\lib\addlib\build\libadd.dll"  "%workspace%\build"
echo ******************end PreLaunchTasks******************