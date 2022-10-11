#include<stdio.h>
void main()
{
    signed int number;
    printf("Enter the number");
    scanf("%d",&number);
    if(number>0)
    {
        printf("%d is a positive number",number);
    }
    else if(number<0)
    {
        printf("%d is a negative number",number);
    }
    else
    {
        printf("number is 0, neither positive, nor negative");
    }
}