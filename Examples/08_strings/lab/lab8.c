#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Hello";
    str[strlen(str)+1]='#';
    printf("%s\n",str);
}