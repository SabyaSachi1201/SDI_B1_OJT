#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr,i;
    ptr=(int *)malloc(10*sizeof(int));
    printf("Base address is %p\n",ptr);
    printf("Values before the initialisation\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",ptr[i]);
    }
    for(i=0;i<10;i++)
    {
        ptr[i]=i+1;
    }
    printf("\nValues after the initialisation\n");
     for(i=0;i<10;i++)
    {
        printf("%d ",ptr[i]);
    }
    
}