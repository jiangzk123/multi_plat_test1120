#include "swap.h"
void my_swap(int& a,int& b)
{
    auto c = a;
    a=b;
    b=c;
    c =1;
}