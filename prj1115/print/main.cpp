#include <iostream>
#include "swap.h"
#include "add.h"
int main(int argc, char* argv[]) {
    #ifdef _WIN32
        std::cout << "This is a Windows platform." << std::endl;
    #elif __linux__
        std::cout << "This is a Linux platform." << std::endl;
    #elif __APPLE__
        std::cout << "This is a macOS platform." << std::endl;
    #else
        std::cout << "Unknown platform." << std::endl;
    #endif
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