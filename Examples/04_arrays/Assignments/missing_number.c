#include<stdio.h>
void main()
{
    int array[10]={1,2,3,4,5,6,7,9};
    int length=sizeof(array)/sizeof(int);
    int i=0,number=0;
    for(i=0;i<length;i++)
    {
        if(array[i+1]-array[i]==1)
        {
            continue;
        }
        else
        {
            number=array[i]+1;
            break;
        }
    }
    printf(" missing number is %d\n",number);
}