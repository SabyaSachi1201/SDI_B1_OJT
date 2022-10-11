#include<stdio.h>
void main()
{
    int number,x;
    printf("Enter the number\n");
    scanf("%d",&number);
    x=counter(number);
    printf("%d is number of digits\n",x);
}
int counter(int number)
{
    int count=0;
    if(number!=0)
    {
        count=1+counter(number/10);
    }
    return count;
}