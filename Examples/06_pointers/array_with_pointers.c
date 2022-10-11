#include<stdio.h>
void main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++)
    {
        printf("%d\t",*(a+i)); //a[i] is equivalent as *(a+i), by default a returns the base value of address
    }
}