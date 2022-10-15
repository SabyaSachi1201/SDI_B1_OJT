#include<stdio.h>
#define BIG(x,y) (x>y)? x : y
int main()
{
    int a=10,b=15,c=20;
    printf("\n Biggest of 3 numbers is %d.\n",BIG(BIG(a,b),c));
    return 0;
}