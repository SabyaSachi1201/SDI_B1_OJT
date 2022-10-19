#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[20],ch;
    FILE *fp;
    printf("\n Enter new file name");
    scanf("%[^\n]",name);
    fp=fopen(name,"w+");
    printf("value of the fp is : %d",fp);
    if(fp==NULL)
    {
        printf("\n ERROR : FAIL TO OPEN FILE\n");
    }
   printf("File created");
   printf("\n Enter data into file & press \"ctrl+d\" to end");
    while((ch=getc(fp))!=EOF)
    {
        putc(ch,fp);
    }
    fseek(fp,0,SEEK_SET);
    printf("\n\n Data in File is \n");
    while((ch=getc(fp))!=EOF)
    {
        putchar(ch);
    }
    fclose(fp);
}