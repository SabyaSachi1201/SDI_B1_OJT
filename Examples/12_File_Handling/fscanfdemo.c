#include<stdio.h>
void main()
{
    FILE *ptr;
    char arr[50];
    int i=0;
    ptr=fopen("fscanfdemo.txt","r"); 
    if(ptr==NULL)
    {
        printf("File was not created");
    }
    else
    {
        printf("\nFile created successfully\n");
        while(fscanf(ptr,"%s",arr)!=EOF)
        {
            printf("%s ",arr);
           
        }
       
    }
}