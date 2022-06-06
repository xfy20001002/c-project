#include"mylist.h"
#include<stdio.h>

//通过结构体成员变量地址得到结构体变量首地址
//ptr为结构体成员变量指针 type为结构体类型 member为ptr对应的结构体成员变量
#ifndef container_of
#define container_of(ptr, type, member) ({			\
        const typeof( ((type *)0)->member ) *__mptr = (ptr);	\
        (type *)( (char *)__mptr - offsetof(type,member) );})
#endif
#define offsetof(TYPE, MEMBER) ((size_t) &((TYPE *)0)->MEMBER)  
//offset得到的是成员变量member到结构体首地址的偏移量

struct Student
{
    char* name;
    struct list_head stu;
    int age;
    int gender;
};


int main(){
    
    

    struct Student s1;
    s1.name = "xiong-fang-yang";
    s1.age = 21;
    s1.gender = 0;
    struct Student s2;
    s2.name = "zhi-hu";
    s2.age = 22;
    s2.gender = 1;
    
    int*ptr = &s1.stu;
    void* p = container_of(ptr, struct Student, stu); 
    
    printf("%p\n",&s1);
    printf("%p\n",p);
    printf("%p\n",ptr);
}
