#include<stdio.h>
void main()
{
    int i,a,n=0;
    printf("Enter value of a\n");
    scanf("%d",&a);
    for(i=7;i>=0;i--)
    {
        n=(a>>i)&0X01;
        printf("%d",n);
    }

    int k=a&0xf8;
    printf("\n");
    for(i=7;i>=0;i--)
    {
        n=(k>>i)&0x01;
        printf("%d",n);
    }
}