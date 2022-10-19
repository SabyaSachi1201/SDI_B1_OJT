#include<stdio.h>
void main()
{
    FILE *filepointer;
    filepointer = fopen("fprintdemo.txt","w");
    if(filepointer==NULL)
    {
        printf("\nFile was not created");
    }
    else
    {
        printf("File created Succesfully!\n");
        fprintf(filepointer,"fprintf-fprintf");
        fclose(filepointer);

    }
}