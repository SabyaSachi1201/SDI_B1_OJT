#include<stdio.h>
void main()
{
    char str[]="Hello";
    char *ptr=str;
    while(*ptr!='\0')
    {
        printf("%c",++*ptr++);
    }

    printf("\n");
}