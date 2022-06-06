//extern void myexit()__attribute__((noreturn));
extern void myexit()__attribute__((noreturn));
int test(int n)
{
    if ( n > 0 )
    {
        myexit();
    /* 程序不可能到达这里*/
    }
    else
    return 0;
}
