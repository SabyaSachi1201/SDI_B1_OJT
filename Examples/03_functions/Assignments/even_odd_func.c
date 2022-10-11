#include<stdio.h>
int check(int);
void main()
{
    int num;
    printf("Enter number");
    scanf("%d",&num);
    check(num);
}
int check(number)
{
    if(number%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
   }
}