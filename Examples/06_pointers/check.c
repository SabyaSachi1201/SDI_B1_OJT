#include<stdio.h>
void main()
{
    float *p;
    float f=10.4;
    p=&f;
   printf("%f",*p);
   int *d;
   int a=20;
   d=&a;
   printf("\n%d",*d);
}