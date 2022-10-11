#include<stdio.h>
int array_sort(int *);
int count_array(int *);
int unique_element(int *,int *);
void print(int *,int *);
void main()
{
    int a[]={1,2,1,1,3,5,7,2};
    array_sort(a);
}
int array_sort(int a[]) //sorts the input array in ascending order using bubble-sort//
{
    int length=8;
    int i,j,temp;
     for(i=0;i<length;i++)
    {
        for(j=0;j<length;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }
    for(i=0;i<length;i++)
    {
        if(a[i]!=0)
        printf("%d ",a[i]);
    }
    
    printf("\n");
    count_array(a);
}
int count_array(int a[]) //counts the number of times elements are occuring in the array and stores the values in another array//
{
    int counter[]={0,0,0,0,0,0,0,0,0,0};
    counter[0]=1; //sets the first element of the array to 1, to start the counting.//
    int pass[5];
    int i=0,j=1,k=0,n=0,length=8;
    while(i<length && j<length)
    {
        if(a[i]==a[j])
        {
            counter[k]++;
            i++;
            j++;
        }
        else
        {
            k++;
            counter[k]+=1;
            i++;
            j++;
        }
    }
    int size=sizeof(counter)/4;
    for(i=0;i<size;i++)
    {
        if(counter[i]!=0)
        {
            pass[n]=counter[i];
            n++;
        }
    }
    unique_element(a,pass);
}
int unique_element(int a[],int pass[]) //finds all the unique elements in the ascending order.//
{
    int unique[5],size=8;
    unique[0]=a[0];
    int i=1,j=2,k=1;
    while(i<size && j<size)
    {
        if(a[i]<a[j])
        {
            unique[k]=a[j];
            i+=1;
            j+=1;
            k+=1;
        }
        else
        {
            i+=1;
            j+=1;
        }
    }
    print(unique,pass);
}
void print(int unique[], int pass[]) //prints number of times each unique element occurs in the original given array
{
   int i=0,n=5;
   for(i=0;i<n;i++)
   {
    printf("%d occurs %d times in  the given array\n",unique[i],pass[i]);
   }
}