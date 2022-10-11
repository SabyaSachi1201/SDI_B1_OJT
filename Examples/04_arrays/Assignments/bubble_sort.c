#include<stdio.h>
void main()
{
    int array[10]={10,5,7,8,11,6,1,9,11,3};
    int i,j,temp;
    printf("\n Array before sorting is :\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;

            }
        }
    }
    printf("\n");
    printf("\n Array afer sorting is :\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",array[i]);
    }


    
    
}