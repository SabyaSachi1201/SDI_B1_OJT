#include<stdio.h>
void main()
{
    float temp_cel=0.0,temp_farenheit=0.0;
    printf("Enter temp in Farenheit : ");
    scanf("%d",&temp_farenheit);
    temp_cel=((temp_farenheit-32.0)*5.0)%9.0;
    printf("%f",temp_cel);
}