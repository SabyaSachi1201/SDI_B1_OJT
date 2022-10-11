#include<stdio.h>
int main()
{
    int a=20,b=30,c=50,k;
    k=pass_3(a,b,c);
    printf("%d is largest",k);
}
int pass_3(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>c && b>a)
    {
        return b;
    }
    else if(c>a && c>b)
    {
        return c;
    }
}