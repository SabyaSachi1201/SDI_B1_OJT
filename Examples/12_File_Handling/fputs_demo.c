#include<stdio.h>
void main()
{
    FILE *ptr;
    ptr=fopen("fputs_demo.txt","w");
    if(ptr==NULL)
    {
        printf("Failed to create file");
    }
    else
    {
        printf("\nFile created Succesfully\n");
        fputs("I AM SABYASACHI",ptr);
        fclose(ptr);
    }
}