#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int *ptr,i,*temp;
    ptr=(int *)malloc(10*sizeof(int));
    // if(ptr==NULL)
    // {
    //     fprintf(stderr"\nFail to allocate memory\n");
    // }
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
    temp=realloc(ptr,(10*sizeof(int))+10);
    printf("Base address is %p\n",temp);
    
    

    
}