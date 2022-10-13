#include<stdio.h>
void main()
{
    int a[]={1,5,7,9,4},*p;
    p=a;
    ++*p;
    printf("%d\n",*p);
    *p++;
    p+=2;
    printf("%d",*p);



}