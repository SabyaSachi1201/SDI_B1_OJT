#include<stdio.h>
void main()
{
    int number,sum=0,bit=0;
    printf("Enter the number");
    scanf("%d",&number);
    if(number==0)
    {
        printf("Sum is 0");
    }
    else
    {
        while(number!=0)
        {
            bit=number%10;
            sum=sum+bit;
            number=number/10;

        }
        printf("%d is the sum of the bits",sum);
    }
}