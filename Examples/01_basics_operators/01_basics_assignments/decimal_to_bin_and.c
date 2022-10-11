#include<stdio.h>
void main()
{
    int a=10,b=8,prod=0,bin_a,bin_b,i;
    for(i=3;i>=0;i--)
    {
        bin_a=(a>>i)&0X01;

        bin_b=(b>>i)&0X01;

    }
    prod=a&b;
    printf("%d",prod);
}