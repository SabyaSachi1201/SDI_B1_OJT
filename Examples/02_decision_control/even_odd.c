#include<stdio.h>
void main()
{
    int number;
    printf("Enter the number");
    scanf("%d",&number);
    if(number%2==0)
    {
        printf("%d is even",number);
    }
    else if(number%2!=0)
    {
        printf("%d is odd",number);
    }
    
}