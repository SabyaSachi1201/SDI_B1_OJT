#include<stdio.h>
int sum(int,int);
void diff();
int mul();
void div(int,int);
void main()
{
    int a=5,b=10,add=0,prod=0;
    add=sum(a,b);
    printf("%d is addition value\n",add);
    diff();
    prod=mul();
    printf("%d is multiplication value\n",prod);
    div(a,b);
}
int sum(int a,int b) //return type with arguments
{
    int add=a+b;
    return add;
}
void diff() //no arguments and no return type
{
    int a=5,b=10,sub=0;
    sub=b-a;
    printf("%d is the substraction value\n",sub);
}
int mul() //no arguments and return type
{
    int a=5,b=10;
    return a*b;
}
void div(int a,int b) //arguments and no return type
{
    int div=b/a;
    printf("%d is the division value\n",div);
}