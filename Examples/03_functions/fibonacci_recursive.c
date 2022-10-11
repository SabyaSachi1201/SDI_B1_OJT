#include<stdio.h>
int count=1,num=7;
int call_fun(int,int);
int main()
{
    int f1=0,f2=1;
    printf("%d\n",f1);
    printf("%d\n",f2);
    call_fun(f1,f2);
    return 0;
}
int call_fun(int n1,int n2)
{   
    if(count<num)
{
    int sum=n1+n2;
    count+=1;
    n1=n2;
    n2=sum;
    printf("%d\n",sum);
    return call_fun(n1,n2);
}
}