#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("hello.txt","w");
    if(fp==NULL)
    {
        printf("\nFailed to create File\n");
    }
    else
    {
        printf("\nFile created successfully\n");
    }
    fclose(fp);
}