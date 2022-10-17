#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("hello.txt","w");
    if(fp!=NULL)
    {
        printf("File created succesfully");
    }
    fclose(fp);
}