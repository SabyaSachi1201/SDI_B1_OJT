#include<stdio.h>
void main()
{
    int array[10]={1,1,3,2,5,7,9,1,1,2},number,i,count=0;
    printf("Enter the number you want to investigate");
    scanf("%d",&number);
    for(i=0;i<10;i++)
    {
        if(array[i]==number)
        {
            count+=1;
        }
    }
    printf("\n%d is the number of times %d is occuring\n",count,number);
    if(count==0)
    {
        printf("Element entered is not present inside the array");
    }

}