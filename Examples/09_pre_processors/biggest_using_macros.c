#include<stdio.h>
#define BIG(x,y) (x>y)?x:y
void main()
{
    int a,b;
    a=5,b=10;
    char c='A',d='B';
    float f=10.23,g=24.45;
    printf("Biggest among two numbers is :%d \n",BIG(a,b));
    printf("Biggest among two numbers is :%c \n",BIG(c,d));
    printf("Biggest among two numbers is :%f \n",BIG(f,g));
}