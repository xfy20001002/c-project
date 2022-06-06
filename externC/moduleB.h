//moduleB头文件
#ifndef __MODULE_B_H //很明显这一部分也是为了防止重复引用
#define __MODULE_B_H
#ifdef __cplusplus //cpp文件将默认定义该宏
extern "C"{ //告诉编译器下面的文件按照C语言的方式进行编译
#include"moduleA.h"
#endif
//其他代码… 
 
#ifdef __cplusplus
}
#endif
#endif