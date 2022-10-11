#include<stdio.h>
int recursive(int i)
{
    static int count=0;
    count+=1;
    return count;
}
int main()
{
    int i,j;
    for(i=0;i<=5;i++)
    j=recursive(i);
    printf("%d\n",j);
    return 0;
    
}
//prints value is equal to 6.