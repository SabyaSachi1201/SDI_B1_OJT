#include<stdio.h>
void main()
{
    int age;
    scanf("%d",&age);
    if(age==18)
    {
        printf("GO TO RTO OFFICE AND GET VOTER CARD");
    }
    else if (age>18)
    {
        printf("eligible to vote");
    }
    else
    {
        printf("not eligible");
    }
}