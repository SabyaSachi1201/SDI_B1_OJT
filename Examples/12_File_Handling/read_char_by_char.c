#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[20],ch;
    FILE *fp;
    printf("\n Enter new file name");
    scanf("%[^\n]",name);
    fp=fopen(name,"r");
    printf("value of the fp is : %d",fp);
    if(fp==NULL)
    {
        printf("\n ERROR : FAIL TO OPEN FILE\n");
    }
    printf("\n Data in %s File \n",name);
    while((ch=getc(fp))!=EOF)
    {
        putchar(ch);
    }
    fclose(fp);
}