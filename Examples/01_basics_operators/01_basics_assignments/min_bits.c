#include<stdio.h>
void main()
{
    int array[50],i=0;
    int number,original;
    printf("number is : ");
    scanf("%d",&number);
    original=number;
    while(number!=0)
    {
        array[i]=number%2;
        number=number/2;
        i++;

    }
    printf("%d bits are required to store the number %d\n",i,original);
    printf("binary representation of %d is ",original);
    for(i=i-1;i>=0;i--)
    {
        printf("%d",array[i]);
    }
}