#include<stdio.h>
#include<string.h>
int main()
{
    char val[50]="SABYASACHI";
    char val1[50]="SABYASACHI";
    char val3[50]=" DATTA";
    char val2[50]="Silencer_69";

    int a=strcmp(val,val1);
    printf("%d\n",a);
    int b=strcmp(val2,val1);
    printf("%d\n",b);
    char dest[100];
    strcpy(dest,val);
    printf("%s\n",dest);
    int c=strlen(val);
    printf("%d",c);
    strcat(val,val3);
    printf("\n%s",val);



}