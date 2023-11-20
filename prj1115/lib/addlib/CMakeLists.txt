cmake_minimum_required(VERSION 3.0)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall"  )
set(CMAKE_BUILD_TYPE Debug)
#设置动态库名称
set(lib_name  "add" )
# 添加动态库的源文件
add_library(${lib_name} SHARED src/add.cpp)
#添加包含目录
include_directories(./include)
# 设置动态库的输出路径
set_target_properties(${lib_name} PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
