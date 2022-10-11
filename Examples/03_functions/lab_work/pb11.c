#include<stdio.h>
int fun(int);
int main()
{
    int i=3;
    fun(i=fun(fun(i)));
    printf("%d\n",i);
    return 0;
}
int fun(int i)
{
    i++;
    return i;
}
//prints value of 5