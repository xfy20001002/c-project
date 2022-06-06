#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>

void sig_handler(int signum)
{
    printf("\nInside handler function\n");
    char *p = NULL;
    p = (char *)malloc(sizeof(char) * 1024);
    if (NULL == p)
    {
        return;
    }
    free(p);
}


int main(int argc, char **argv)
{
    char *p = NULL;
    signal(SIGINT, sig_handler); // 初始化信号处理函数
    
    while (1)
    {
        p = (char *)malloc(sizeof(char) * 1024);
        if (NULL == p)
        {
            continue;
        }
        free(p);
    }

    return 0;
}