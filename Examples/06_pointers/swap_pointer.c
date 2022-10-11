#include<stdio.h>
int swap(int*,int*);
void main()
{
    int num1,num2;
    num1=5;
    num2=3;
    printf("\nnum1=%d\tnum2=%d",num1,num2);
    swap(&num1,&num2);
}
int swap(int *num1,int *num2)
{
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
    printf("\nnum1=%d\tnum2=%d",*num1,*num2);

}