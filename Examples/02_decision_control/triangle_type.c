#include<stdio.h>
void main()
{
    int len1,len2,len3;
    printf("\nEnter sides of triangle");
    scanf("%d %d %d",&len1,&len2,&len3);
    if(len1==0||len2==0||len3==0)
    {
        printf("Enter valid length and try again");
    }
    else
    {
        if(len1==len2 && len2==len3)
        {
            printf("Equilateral triangle");
        }
        else if(len1!=len2 && len2!=len3)
        {
            printf("Scalene triangle");
        }
        else
        {
            printf("Isosceles triangle");
        }
    }
}