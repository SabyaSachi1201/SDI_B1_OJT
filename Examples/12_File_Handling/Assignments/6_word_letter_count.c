#include<stdio.h>
void main()
{
    FILE *p;
    p=fopen("new.txt","r");
    int word=0,chr=0;
    char ch;
    if(p==NULL)
    {
        printf("\nERROR: File not found!!!\n");
    }
    else
    {
        ch=fgetc(p); //fgetc will read only one character at a time.
        while(ch!=EOF)
        {
            if(ch==' '||ch=='\n')
            {
                word+=1;
            }
            else
            {
                chr+=1;
            }
            ch=fgetc(p);
        }
        printf("\nNumber of words are %d\n",word);
        printf("Number of characters are %d\n",chr);


    }
}