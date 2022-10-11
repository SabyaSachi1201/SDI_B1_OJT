#include<stdio.h>
void main()
{
    int a[2][2];
    int i,j;
    //take input for array a
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n The array is :\n");
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nThe diagonal elements are\n");
      for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(i==j)
            {
            printf("%d\t",a[i][j]);
            }
        }
    }
}