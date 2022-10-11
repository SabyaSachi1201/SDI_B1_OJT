#include<stdio.h>
void main()
{
    int n,m,temp;
    n=3;
    m=n;
    int matrix[n][m],tmatrix[m][n];
    int i=0,j=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nThe original matrix is : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           tmatrix[j][i]=matrix[i][j];
        }
    }
        printf("\nThe transposed matrix is : \n");

      for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d  ",tmatrix[i][j]);
        }
        printf("\n");
    }
}