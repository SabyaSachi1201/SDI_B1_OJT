#include<stdio.h>
void main()
{
    int arr[5]={1,2,3,8,7},i;
    int max=0,min=0;
    max=arr[0];
    min=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d is the largest element\n",max);
    for(i=0;i<5;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("%d is the smallest element",min);
}