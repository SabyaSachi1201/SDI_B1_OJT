#include<stdio.h>
int sum(int);
void main()
{
    int n=15,val;
    val=sum(n);
    printf("%d",val);
}
int sum(int n)
{
    int sum1=0;
    if(n!=0)
    {
        
    sum1=n+sum(n-1);
    return sum1;
    }
}