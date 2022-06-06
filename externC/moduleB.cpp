#include"moduleB.h"
#include<iostream>
//利用g++ -c moduleB.c进行编译 函数名编译为_fun(int,int)
using namespace std;
int main()
{
    cout<<fun(2,3)<<endl;
}