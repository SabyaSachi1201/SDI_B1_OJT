#include<stdio.h>
int print_array(int *,int);
void main()
{
    int n=5,i;
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    print_array(array,n);

}
int print_array( int array[], int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
}