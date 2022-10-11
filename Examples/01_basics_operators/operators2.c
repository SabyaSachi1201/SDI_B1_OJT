#include<stdio.h>
void main()
{
    int a=5,b,c;
    b=a++;
    c=++a;
    printf("a=%d,b=%d,c=%d\n",a,b,c);
}