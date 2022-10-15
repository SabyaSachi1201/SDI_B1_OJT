#include<stdio.h>
#ifndef NEGATIVE
#define POSITIVE
#endif
void main()
{

    #ifdef POSITIVE
        int a=10,b=20;
    #endif

    #ifdef NEGATIVE
    int a=-10,b=-20;
    #endif
    printf("%d",a+b);
}    