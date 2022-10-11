#include<stdio.h>
int call_rec(int);
void main()
{
    int n=0;
   call_rec(n);
}
int call_rec(b)
{
    if(b<=10)
    {
        printf("%d\n",b);
        return call_rec(b+1);    
    }
}