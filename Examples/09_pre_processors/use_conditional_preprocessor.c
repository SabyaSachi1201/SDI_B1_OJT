#include<stdio.h>
#define POSITIVE
void main()
{
    #if defined POSITIVE
    int a=10,b=20;
    printf("%d",a+b);
    #endif
    #ifdef NEGATIVE
    int a=-10,b=-20;
    printf("%d",a+b);
    #endif
}