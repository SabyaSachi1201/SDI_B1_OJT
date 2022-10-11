#include<stdio.h>
void main()
{
    float ci=0.0,co=0.0,fi=0.0,fo=0.0;
    printf("Enter temperature in celsius");
    scanf("%f",&ci);
    fo=(ci*1.8)+32;
    printf("%0.2f degree farenheit",fo);
    printf("\n");
    printf("Enter temperature in farenheit");
    scanf("%f",&fi);
    co=(fi-32)*0.5555;
    printf("%0.2f degree celsius",co);





}