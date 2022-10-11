#include<stdio.h>
void main()
{
    int a[]={3,4,6,8,9,10},*p;
    p=a;
    for(int i=0;i<6;i++)
    {
        printf("%d\t",*(p+i)); //a[i] is equivalent as *(p+i), by default a returns the base value of address
    }
    int b=(p+5)-(p+3);
    printf("\n%d",*(p+b)); 
}