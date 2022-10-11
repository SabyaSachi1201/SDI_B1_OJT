#include<stdio.h>
void main()
{
    register int i=0;
    register int n;
    scanf("%d",&n); //register address cannot be changed.
    for(i=1;i<n;i++)
    {
        printf("%d\n",i);
    }
}