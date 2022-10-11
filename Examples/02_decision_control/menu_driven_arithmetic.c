#include<stdio.h>
void main()
{
    int a,b,choice;
    restart:
    printf("\n1.Addition");
    printf("\n2.Substraction");
    printf("\n3.Multiplication");
    printf("\n4.Remainder Division");
    printf("\n5.Quotient Division");
    printf("\nEnter the numbers a and b and choice");
    scanf("%d %d %d",&a,&b,&choice);
    switch(choice)
    {
        case 1: printf("\nresult is %d",a+b);
        break;
        case 2:
                if(a>b)
                {
                    printf("\nresult is %d",a-b);
                } 
                else
                {
                    printf("\nresult is %d",b-a);

                }
        break;
        case 3: printf("\nresult is %d",a*b);
        break;
        case 4: printf("\nresult is %d",a%b);
        break;
        case 5: printf("\nresult is %f",a/b);
        break;
        default: printf("\nERROR: Please choose from the menu\n");
        goto restart;
    }
}