#include<stdio.h>

#define asmlinkage __attribute__ ((regparm (0)))
int func2(int a,int c,int d,int f)__attribute__ ((regparm (0)));

int func1(int a,int c){
    int b = 1;
    a = b;
    return a;
}

int func2(int a,int c,int d,int f){
    int b = 1;
    a = b;
    return a;
}

int main(){
    func1(2,3);
    func2(2,3,4,5);
}