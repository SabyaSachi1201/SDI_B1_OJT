#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5};
    int i=0;
    int b[5];
    for(i=0;i<5;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<5;i++)
    {
         printf("%d ",b[i]);
    }
   
   
}