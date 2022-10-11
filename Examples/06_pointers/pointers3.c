#include<stdio.h>
void main()
{
    int *p;
    int a=10;
    p=&a;
    printf(" Address of variable a is at %p\n",&a);
    printf("Value of variable p is %d\n",p); //gives garbage value
    printf("Value of variable a is %d\n",a);
    printf("Value of variable *p is %d\n",*p);
    printf(" Address of variable p is at %p\n",&p);
}