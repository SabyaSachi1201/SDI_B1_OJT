#include<stdio.h>
void main()
{   
    int phy=0,chem=0,c=0,be=0,thermo=0,sum=0;
    printf("Enter marks of 5 subjects, each out of 100");
    scanf("%d %d %d %d %d",&phy,&chem,&c,&thermo,&be);
    sum=phy+chem+thermo+c+be;
    printf("Total marks obtained is %d, out of 500",sum);
    if(sum>=480 && sum<=500)
    {
        printf("\nO GRADE");
    }
    else
    {
        if(sum>450 && sum<=479)
        {
            printf("\nE GRADE");
        }
        else if(sum>420 && sum<=449)
        {
            printf("\nA GRADE");
        }
        else if(sum>390 && sum<=419)
        {
            printf("\nB GRADE");
        }
        else if(sum>360 && sum<=389)
        {
            printf("\nC GRADE");
        }
        else if(sum>330 && sum<=359)
        {
            printf("\nD GRADE");
        }
        else if(sum<329)
        {
            printf("\nF GRADE");
        }
    }
}