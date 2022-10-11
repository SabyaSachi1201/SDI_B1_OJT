#include<stdio.h>
void main()
{
    int n=0,sum=0,i=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum of %d natural numbers is %d",n,sum);
}