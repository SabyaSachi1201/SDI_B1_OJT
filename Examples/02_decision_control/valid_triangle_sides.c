#include<stdio.h>
void main()
{
    int s1,s2,s3;
    printf("Enter the 3 sides of trinagle");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1!=0 && s2!=0 && s3!=0)
    {
        if(s1+s2>s3 && s1+s3>s2 && s2+s3>s1)
        {
            printf("Valid Triangle");
        }
        else
        {
            printf("Invalid Trinagle");
        }
    }
    else
    {
        printf("Side of triangle cannot be 0");
    }
}