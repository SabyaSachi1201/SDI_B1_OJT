#include<stdio.h>
void main()
{
    int array[50],i=0,j=0;
    int number,original,count=0;
    printf("number is : ");
    scanf("%d",&number);
    original=number;
    while(number!=0)
    {
        array[i]=number%2;
        number=number/2;
        i++;
    }
    j=i;
    for(i=0;i<=j-1;i++)
    {
        if(array[i]==1)
        {
            count+=1;
        }
    }
    printf("number of 1s in the number %d is %d",original,count);
}