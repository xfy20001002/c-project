#include<stdio.h>


void myprint(const char *format,...)__attribute__((format(printf,1,2)));

void myprint(const char *format,...){
}

void test()
{
    myprint("i=%d/n",6);
    myprint("i=%s/n",6);
    myprint("i=%s/n","abc");
    myprint("%s,%d,%d/n",1,2);
}


int main(){
    unsigned long long d = 123ULL;
    __complex__ float a = 4 + 3i;
    float b = __real__ a; 
    /* b现在是4. */
 
    float c = __imag__ a; 
    /* c现在是3. */

    printf("%f\t%f\n",b,c);
    printf("%lld\n",d);
}