#include<stdio.h>
enum led{OFF,ON};
void main()
{
    enum led state;
    printf("\nEnter the value 0 for OFF and 1 for ON\n");
    scanf("%d",&state);
    if(state==OFF)
    {
        printf("LED OFF");
    }
    else if(state==ON)
    {
        printf("LED ON");
    }
}