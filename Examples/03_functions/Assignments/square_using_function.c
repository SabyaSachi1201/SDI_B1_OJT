#include<stdio.h>
double square(float);
void main()
{
    float x,val;
    printf("Enter the value of number\n");
    scanf("%f",&x);
    val=square(x);
    printf("\nvalue = %f",val);
}
double square(float num)
{
    float sqr=num*num;
    return sqr;
}