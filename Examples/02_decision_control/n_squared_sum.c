#include<stdio.h>
void main()
{
    int square,n,sum=0,i=0;
    printf("Enter the value of number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        square=i*i;
        sum=sum+square;
    }
    printf("%d",sum);
}