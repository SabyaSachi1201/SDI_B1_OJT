#include<stdio.h>
void main()
{
    int number,i=0,count=0,x;
    scanf("%d",&number);
    for(i=3;i>=0;i--)
    {
        x=(number>>i) & 0X01;
        printf("%d",x);
    }
    printf("\n%d",number<<2);
    
}