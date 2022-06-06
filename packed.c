#include<stdio.h>
/*
最小方式对齐
struct test
{
    char a;
    int x[2] __attribute__ ((packed));
};
*/

struct test
{
    char a;
    int x[2];
};

int main(){
    struct test test_1;
    int a = sizeof(test_1);
    printf("%d\n",a);
}