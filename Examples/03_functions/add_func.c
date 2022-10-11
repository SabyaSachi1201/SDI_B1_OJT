#include<stdio.h>
int add(int *n1,int *n2);
int main()
{
    int n1=3,n2=5,c;
    c=add(&n1,&n2);
    printf("Addition value is %d",c);
}
int add(int *n1, int *n2)
{
    int d=*n1+*n2;
    return d;
}