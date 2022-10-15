#include<stdio.h>
#define ODD
int main()
{
    #if defined EVEN
        int a=12,b=16;
    #elif defined ODD
        int a=10,b=15;
    #else 
        int a=0,b=0;
    #endif
    printf("%d",a+b);
}