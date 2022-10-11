#include<stdio.h>
void main()
{
    int a[]={3,4,6,8,9,10},*p;
    p=a;
    printf("%d\n",(p+5)); //gives address location of 5th element in the array
    printf("%d\n",*(p+5)); // 5th element in the array
    printf("%d\n",(p+3));//gives the address location of 3rd element in the array
    printf("%d\n",*(p+3)); // 5th element in the array
    int b=(p+5)-(p+3);// gives b=2
    printf("%d\n",(p+b)); //prints address of p+2 or a[2]
    printf("%d\n",*(p+b)); //prints value of p+2 or a[2]
}