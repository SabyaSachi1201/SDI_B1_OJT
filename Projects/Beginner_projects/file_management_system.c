#include<stdio.h>
void main()
{
    char option;
    FILE *ptr;
    char str[20];
    char line[100];
    int num;
   
    printf("\n1.Enter 'C' to create a new file.\n2.Enter 'R' to enter read mode of file.\n3.Enter 'W' to enter write mode of file (Erase Previous file data).\n4.Enter 'A' to preserve the previous file data and append the new data to next line.\n5.Enter 'E' to close file and exit.");
    printf("Enter the operation you want to perform.\n THE OPTIONS MUST BE ENTERRED IN UPPER-CASE!!");
    option =getchar();

    switch(option)
    {
        case 'C':
        printf("\nEnter the name of the file in format of 'filename.txt'\n");
        scanf("%s",str);
        ptr=fopen(str,"w");
        if(ptr!=NULL)
        {
            printf("\nYour file %s has been created succesfully\n",str);
        }
        else
        {
            printf("\nError : File not created\n");
        }  
        break;  
        case 'R':
        ptr=fopen(str,"r");
        if(ptr!=NULL)
        {
            while(fgets(line,sizeof(line),ptr))
            {
                printf("%s",line);
            }
        }
        else
        {
            printf("\nError : File not found\n");
        }    
        break;  

    }
    
}