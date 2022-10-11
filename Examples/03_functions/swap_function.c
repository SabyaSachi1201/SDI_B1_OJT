#include<stdio.h>
int swap(int,int);
int a=5,b=6;
void main()
{
    //int a=5,b=6;
    printf("\nvalue before swapping is 1st number = %d and second number = %d",a,b);
    swap(a,b);
    printf("\nvalue before swapping is 1st number = %d and second number = %d",a,b);
}
int swap(x,y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    //printf("\nvalue after swapping is 1st number = %d and second number = %d",x,y);
}