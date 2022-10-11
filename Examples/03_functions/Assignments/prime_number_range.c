#include<stdio.h>
int print_prime(int,int);
int is_prime(int);
void main()
{
    int high,low;
    printf("\nEnter the lower value of the range\n");
    scanf("%d",&low);
    printf("\nEnter the higher value of the range\n");
    scanf("%d",&high);
    print_prime(high,low);
}

int print_prime(int high,int low)
{
    int a;
    for(int i=low;i<=high;i++)
    {
        a=is_prime(i);
        if(a)
        printf("%d ",i);
    }

}
int is_prime(int number)
{
    for(int i=2;i*i<=number;i++)
    {
        if(number%i==0)
        {
            return 0;
        }
       
    }
    return 1;
}