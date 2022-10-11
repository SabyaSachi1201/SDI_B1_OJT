#include<stdio.h>
void main()
{
    int i=0;
    char text[]="hello world";
    //character wise printing 
    while(text[i]!='\0')
    {
        printf("%c\n",text[i]);
        i++;
    }
    //string printing

    printf("%s",text);
    
}