#include<stdio.h>
void main()
{
    int array[10];
    int i=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nThe array is :\n");
     for(i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }
}