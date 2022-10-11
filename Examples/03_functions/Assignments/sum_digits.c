#include<stdio.h>
int digit(int);
void main()
{
    int number,sum;
    scanf("%d",&number);
    sum=digit(number);
    printf("%d\n",sum);
}
int digit(int number)
{
    int val,sum=0;
    if(number!=0)
    {
        val=number%10;
        sum=val+digit(number/10);
        return sum;
    }
    else
    {
        return 0;
    }
}
