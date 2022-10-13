#include<stdio.h>
void main()
{
    int a=130;
    char *ptr;
    ptr=(char *)&a;
    printf("%d\n",*ptr);
}