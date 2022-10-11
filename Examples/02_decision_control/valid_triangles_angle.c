#include<stdio.h>
void main()
{
    int a1,a2,a3;
    printf("Enter the 3 angles of trinagle");
    scanf("%d %d %d",&a1,&a2,&a3);
    if(a1+a2+a3==180)
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle");
    }
}