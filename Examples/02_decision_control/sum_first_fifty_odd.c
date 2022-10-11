#include<stdio.h>
void main()
{
    int count=0,i=0,sum=0;
    while(count!=50)
    {
        i+=1;
        if(i%2!=0)
        {
            sum=sum+i;
            count+=1;
        }
    }
    printf("%d",sum);

}