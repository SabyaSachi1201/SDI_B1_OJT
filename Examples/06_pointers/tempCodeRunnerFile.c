#include<stdio.h>
void main()
{
    int a[3][2];
    int *p,*q,i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",*(*(a+i)+j));
        }
        printf("\n");
    }
}