#include<stdio.h>
int add(int,int);
struct operation
{
    int a;
    int b;
}value;
void main()
{
    value.a=5;
    value.b=10;
    int n;
    n=add(value.a,value.b);
    printf("%d\n",n);
}
int add(int x, int y)
{
    return x+y;
}