#include<stdio.h>
void main()
{
    int number,i=0;
    printf("\nEnter the number who's table you want to print\n");
    scanf("%d",&number);
    printf("The table is:\n");
    for(i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n",number,i,number*i);
    }

}