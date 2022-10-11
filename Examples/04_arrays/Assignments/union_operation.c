#include<stdio.h>
void main()
{
    int array1[]={1,2,3,4,5},array2[]={2,4,5,6,8,10,12};
    int i=0,j=0,n=5,m=7,k=0;
    int union_array[n+m];
    printf("\n The first array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array1[i]);
    }
    printf("\n The second array is : ");
    for(i=0;i<m;i++)
    {
        printf("%d ",array2[i]);
    }
    i=0,j=0;
        while(i<n && j<m)
        {
            if(array1[i]<array2[j])
            {
                union_array[k]=array1[i];
                i+=1;
                k++;
            }
            else if(array1[i]>array2[j])
            {
                union_array[k]=array2[j];
                j+=1;
                k++; 
            }
            else if(array1[i]==array2[j])
            {
                union_array[k]=array1[i];
                i++;
                j++;
                k++;
            }
        }    
    while(j<m)
    {
        union_array[k]=array2[j];
        k++;
        j++;
    }
     printf("\n The union operation of the above two arrays gives us : \n");
    for(i=0;i<k;i++)
    {
        printf("%d ",union_array[i]);
    }

   

}



