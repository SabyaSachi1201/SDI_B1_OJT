#include<stdio.h>
int fact(int);
int fact(int num)
{   int num1;
    if(num==0)
    {
        return 1;
    }
    else
    {
    num1=num*fact(num-1);
    return num1;

    }
}
void main()
{
    int number,b;
    number=10;
    b=fact(number);
    printf("%d",b); 
}