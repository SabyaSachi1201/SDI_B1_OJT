#include<stdio.h>
void main()
{
    FILE *p;
    char str[60];
    p=fopen("fgets_demo.txt","r");
    if(p==NULL)
    {
        printf("File not found!");
    }
    else
    {
        printf("\nFile located succesfully!\n");
        if( fgets (str, 60, p)!=NULL ) 
        {
            puts(str);
        }
        fclose(p);
    }
}