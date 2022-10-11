#include<stdio.h>
void main()
{
    int a[3]={1,2,3};
    int b[3];
    b=a; //throws error
    printf("%d",b[0]);
}