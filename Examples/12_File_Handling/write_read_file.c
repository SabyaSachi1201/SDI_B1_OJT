#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[20],ch;
    FILE *fp;
    printf("\n Enter the new file name:\n");
    scanf("%[^\n]",name);
    fp=fopen(name,"w+");
    if(fp==NULL)
    {
        printf("\n Fail to create a ffile\n");
        exit(1);
    }
    printf("\n File created \n");
    printf("\n Enter data into File and press \"clte+d\" to end\n");
    while((ch=getchar())!=EOF)
        putc(ch,fp);
    fseek(fp,1,SEEK_SET);
    printf("\n\n Data in file \n");
    while((ch = getc(fp))!=EOF)
        putchar(ch);
    fclose(fp);
}