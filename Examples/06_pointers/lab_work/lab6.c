#include<stdio.h>
void main()
{
    int a=5;
    int *ptr;
    ptr=&a;
    *ptr=*ptr*3;
    printf("%d",a);
}