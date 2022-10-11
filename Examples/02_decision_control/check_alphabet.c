#include<stdio.h>
void main()
{
    char x;
    scanf("%c",&x);
    if(x>=65&&x<=122)
    {
        printf("%c is an alphabet",x);
    }
    else
    {
        printf("%c is not an alphabet",x);

    }

}