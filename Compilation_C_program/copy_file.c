/*
 * C Program to Copy a File into Another File
 */
#include <stdio.h>
 
void main()
{
    FILE *fp1, *fp2;
    char ch;
    int pos;
 
    if ((fp1 = fopen("ex1.txt","r")) == NULL)    
    {    
        printf("\nFile cannot be opened");
        return;
    }
    else     
    {
        printf("\n File located successfully! It will be copied. ");    
    }
    fp2 = fopen("ex1copy.txt", "w");  
    fseek(fp1,0, SEEK_END); // file pointer at end of file
    pos = ftell(fp1);
    fseek(fp1,0, SEEK_SET); // file pointer set at start
    while (pos--)
    {
        ch = fgetc(fp1);  // copying file character by character
        fputc(ch, fp2);
    }    
    fclose(fp1);
    fclose(fp2);    
}