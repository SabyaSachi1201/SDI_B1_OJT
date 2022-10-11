#include<stdio.h>
void main()
{
    int i=0,j,n,del,temp,pos;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The array is : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\nEnter the element you want to delete : ");
    scanf("%d",&del);
    for(i=0;i<n;i++)
    {
        if(array[i]==del)
        {
            pos=i; //directly return index
            break;
        }    
    }

    for(j=pos;j<n-1;j++)
    {
        array[j]=array[j+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d\t",array[i]);
    }
}