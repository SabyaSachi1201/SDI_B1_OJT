#include<stdio.h>
void main()
{
    void *ptr;
    int a=5;
    char b='A';
    float c=3.5;
    ptr=&a;
    printf("%d %d\n",*(int *)ptr,ptr);
    ptr=&b;
    printf("%c %d\n",*(char *)ptr,ptr);
    ptr=&c;
    printf("%0.2f %d\n",*(float *)ptr,ptr);
}