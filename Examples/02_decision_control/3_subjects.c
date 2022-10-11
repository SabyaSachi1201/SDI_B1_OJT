#include<stdio.h>
void main()
{
    int m1,m2,m3;
    float avg;
    scanf("%d %d %d",&m1,&m2,&m3);
    avg=(m1+m2+m3)/3;
    printf("%0.2f",avg);
    if(m1>=35 && m2>=35 && m3>=35)
    {   printf("\nPass");
         if(m1>=70 && m2>=70 && m3>=70)
        {
            printf("\nDistinction\n");
        }
        else
        {
            if(m1>=60 && m2>=60 && m3>=60)
            {
                printf("\nFirst Class\n");
            }
            else if(m1>=50 && m2>=50 && m3>=50)
            {
                printf("\nSecond Class");
            }
            else
            {
                printf("\nThird class\n");
            }
        }  
    }
    else
    {
        printf("Failed");
    }
}

   
