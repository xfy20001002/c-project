#include    <stdio.h>
#include    <unistd.h>
#include    <stdlib.h>
#include    <fcntl.h>
 
#define     COUNT  10
int
main()
{
    char    buf[COUNT];
    size_t  nbytes;
    int     n, flags;
 
 
    for (n = 0; n< COUNT; n++)
        buf[n] = 0;
 
 
    if ( (flags = fcntl(STDIN_FILENO, F_GETFL, 0)) < 0)
    {
        printf("F_GETFL error");
        exit(0);
    }
    
    printf("flags:%d\n", flags);
 
 
    nbytes = 10;
    read(STDIN_FILENO, buf, nbytes); 
    printf("hello\n");
    printf("%s\n", buf);
}