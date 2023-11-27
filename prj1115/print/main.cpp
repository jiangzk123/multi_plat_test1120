#include <iostream>
#include "swap.h"
#include "add.h"
#include "example.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"

int spdlog_test() 
{
    spdlog::info("Welcome to spdlog!");
    spdlog::error("Some error message with arg: {}", 1);
    
    spdlog::warn("Easy padding in numbers like {:08d}", 12);
    spdlog::critical("Support for int: {0:d};  hex: {0:x};  oct: {0:o}; bin: {0:b}", 42);
    spdlog::info("Support for floats {:03.2f}", 1.23456);
    spdlog::info("Positional args are {1} {0}..", "too", "supported");
    spdlog::info("{:<30}", "left aligned");
    
    spdlog::set_level(spdlog::level::debug); // Set global log level to debug
    spdlog::debug("This message should be displayed..");    
    
    // change log pattern
    spdlog::set_pattern("[%H:%M:%S %z] [%n] [%^---%L---%$] [thread %t] %v");
    
    // Compile time log levels
    // define SPDLOG_ACTIVE_LEVEL to desired level
    SPDLOG_TRACE("Some trace message with param {}", 42);
    SPDLOG_DEBUG("Some debug message");
}

int main(int argc, char* argv[]) {
   // spdlog_test();
    spdlog_test2();
    #ifdef _WIN32
        std::cout << "This is a Windows platform." << std::endl;
    #elif __linux__
        std::cout << "This is a Linux platform." << std::endl;
    #elif __APPLE__
        std::cout << "This is a macOS platform." << std::endl;
    #else
        std::cout << "Unknown platform." << std::endl;
    #endif
    // 初始化 spdlog
    //spdlog::set_level(spdlog::level::info);
    //spdlog::info("Hello, spdlog!");
    std::cout << "参数个数:" << argc << std::endl;
    std::cout << "参数内容:" << std::endl; 
    for (int i = 0; i < argc; ++i) 
    {
          std::cout << "参数" << i << ":" << argv[i] << std::endl;
    }
    int a =10;
    int b =11 ;
    std::cout << "转换前:a = " << a<<" b = " << b << std::endl;
    my_swap(a,b);
    std::cout << "转换后:a = " << a<<" b = " << b << std::endl;

    std::cout << "准备开始调用add动态库进行加法计算 " << std::endl;
    std::cout << "a+b= " << my_add(a,b)<< std::endl;
    return 0;


}