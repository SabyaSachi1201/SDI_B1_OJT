#include<stdio.h>
int largest(int,int);
int largest(int x,int y)
{
    if(x>y)
    {
        printf("%d is largest",x);
    }
    else
    {
        printf("%d is largest",y);
    }
}
void main()
{
    inline int a=10,b=20;
    largest(a,b);
}