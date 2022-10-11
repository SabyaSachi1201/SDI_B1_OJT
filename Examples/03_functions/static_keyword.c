#include<stdio.h>
void main()
{
    increment();
    increment();
    increment();
}
int increment()
{
   static int i=0;
    i+=1;
    printf("%d\n",i);
}
