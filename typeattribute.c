#include<stdio.h>
struct p
{
    int a;
    char b;
    char c;
}__attribute__((aligned(4))) pp;//以4字节方式对齐

struct q
{
    int a;
    char b;
    struct p qn;
    char c;
}__attribute__((aligned(8))) qq;

int main()
{
    printf("sizeof(int)=%ld,sizeof(short)=%ld.sizeof(char)=%ld\n",sizeof(int),sizeof(short),sizeof(char));
    printf("pp=%ld,qq=%ld \n", sizeof(pp),sizeof(qq));
    return 0;
}
