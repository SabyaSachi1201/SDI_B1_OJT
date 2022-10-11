#include<stdio.h>
void main()
{
    int i1=0,i2=1,sum,count;
    
    printf("Count value is ?\n");
    scanf("%d",&count);
    for(int i=0;i<count;i++)
    {
        sum=i1+i2;
        i1=i2;
        i2=sum;
        printf("%d\n",sum);
    }
}