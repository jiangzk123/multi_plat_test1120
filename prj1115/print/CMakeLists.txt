cmake_minimum_required(VERSION 3.0)
set(prj_name  "main_test1" )
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall"  )
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 14)  # 或者 14、17，取决于你的需要
project(${prj_name} LANGUAGES CXX C)
#include_directories(./include  ../lib/addlib/include)
#set(spdlog_DIR "/home/jiangzk/myLib/spdlog" CACHE PATH "Path to spdlogConfig.cmake")
# 查找动态库
find_library(ADD_LIBRARY add HINTS ${CMAKE_CURRENT_SOURCE_DIR}/../lib/addlib/build)
#ubuntu 下使用

#find_package(spdlog REQUIRED)

add_executable(${prj_name} main.cpp src/swap.cpp)

#target_include_directories(${prj_name} PRIVATE ${SPDLOG_INCLUDE_DIRS})
#target_link_libraries(${prj_name} PRIVATE ${SPDLOG_LIBRARIES})

# 链接动态库到主工程
target_link_libraries(${prj_name} ${ADD_LIBRARY})

# 设置头文件路径
target_include_directories(${prj_name} PRIVATE ./include ../lib/addlib/include)