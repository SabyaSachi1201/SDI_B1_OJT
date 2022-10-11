#include<stdio.h>
int inc(int*);
void main()
{
    int number=5,a;
    printf("%d\n",number);
    a=inc(&number);
    printf("%d",a);
}
int inc(int *number)
{
    int b;
    b=++*number;
    return(b);
}