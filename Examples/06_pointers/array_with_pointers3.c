#include<stdio.h>
void main()
{
    int a[]={1,2,3,4,5,6},*p;
    p=a;
    printf("%d %d\n",p,*p);
    p++;
    printf("%d %d",p,*p);


}