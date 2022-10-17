#include<stdio.h>
void main()
{
    char p[]="%d\n";
    p[1]='c';
    printf("%s",p);
    printf(p,65);

}