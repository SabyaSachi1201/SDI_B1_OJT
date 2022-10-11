#include<stdio.h>
void main()
{
    int n,sum=0;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter elements\n");
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+array[i];
    }
    printf("\nThe sum of array elements is : %d",sum);   

}