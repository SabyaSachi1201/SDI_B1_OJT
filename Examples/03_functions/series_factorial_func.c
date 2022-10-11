#include<stdio.h>
int factorial(int);
void main()
{
    int sum=0;
    sum=factorial(1)/1+factorial(2)/2+factorial(3)/3+factorial(4)/4+factorial(5)/5;
    printf("%d",sum);
}
int factorial(int num)
{
    int prod=1;
    if(num==0)
    {
        return 1;
    }
    else
    {
        prod=prod*factorial(num-1);
        return prod;
    }
}