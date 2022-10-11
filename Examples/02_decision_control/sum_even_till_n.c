#include<stdio.h>
void main()
{
    int number=0,i,sum=0;
    printf("Enter the number");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    printf("\nsum = %d",sum);
}