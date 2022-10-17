#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("hello.txt","r");
    fwrite(fp,"Hi",1);
    if(fp!=NULL)
    {
        printf("File created succesfully");
    }
    fclose(fp);
}