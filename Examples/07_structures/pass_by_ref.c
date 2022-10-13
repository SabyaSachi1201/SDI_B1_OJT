#include<stdio.h>
int add(int,int,int*);
struct operation
{
    int a;
    int b;
    int res;
}value;
int add(int x,int y,int *z)
{
    *z=x+y;
    return *z;
    
}
void main()
{
    value.a=5,value.b=10;
    int x=add(value.a,value.b,&value.res);
    printf("%d",x);
    
}