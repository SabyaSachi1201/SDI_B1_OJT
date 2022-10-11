#include<stdio.h>
void main()
{
    int a=10,b=2;
    printf("\n a=%d b=%d",a,b);
    if(a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    printf("\n a=%d b=%d",a,b);
}