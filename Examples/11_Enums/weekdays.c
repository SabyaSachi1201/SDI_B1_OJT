#include<stdio.h>
enum day {sun,mon,tue,wed,thu,fri,sat};
void main()
{
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case sun: printf("Sunday");break;
        case mon: printf("Monday");break;
        case tue: printf("Tuesday");break;
        case wed: printf("Wednesday");break;
        case thu: printf("Thursday");break;
        case fri: printf("Friday");break;
        case sat: printf("Satday");break;
        default: exit(0);

    }

}