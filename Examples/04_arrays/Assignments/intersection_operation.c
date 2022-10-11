#include<stdio.h>
void main()
{
    int array1[]={1,2,3,4,5},array2[]={2,4,5,6,8,10,12};
    int i=0,j=0,n=5,m=7,k=0;
    int inter_array[n+m];
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
                i+=1;
            }
            else if(array1[i]>array2[j])
            {
                j+=1;
            }
            else if(array1[i]==array2[j])
            {
                inter_array[k]=array1[i];
                i+=1;
                j+=1;
                k++;
            }
        }    
     printf("\n The intersection operation of the above two arrays gives us : \n");
    for(i=0;i<k;i++)
    {
        printf("%d ",inter_array[i]);
    }

   

}



