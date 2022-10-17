#include<stdio.h>
#include<stdlib.h>
enum state {OFF,ON};
void main()
{
    enum state n;
    printf("\n Enter the value 1 for ON and 0 for OFF");
    scanf("%d",&n);
    switch(n)
    {
        case ON: printf("Pin 4 -> HIGH");break;
        case OFF: printf("Pin 4 -> LOW");break;
        default: exit(0);
    }

}