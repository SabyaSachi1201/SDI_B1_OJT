#include<stdio.h>
void main()
{
    int array[]={1,3,5,7,9},i=0,count=0;
    for(i=0;i<5;i++)
    {
        printf("%d ",array[i]);
        count+=1;
    }
    printf("\n%d",count);
}