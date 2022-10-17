#include<stdio.h>
enum day {buffer,jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
void main()
{
    enum day n;
    scanf("%d",&n);
    switch(n)
    {
        case jan: printf("Jan %d",jan);break;
        case feb: printf("Feb %d",feb);break;
        case mar: printf("Mar %d",mar);break;
        case apr: printf("Apr %d",apr);break;
        case may: printf("May %d",may);break;
        case jun: printf("Jun %d",jun);break;
        case jul: printf("Jul %d",jul);break;
        case aug: printf("Aug %d",aug);break;
        case sep: printf("Sep %d",sep);break;
        case oct: printf("Oct %d",oct);break;
        case nov: printf("Nov %d",nov);break;
        case dec: printf("Dec %d",dec);break;
        default:  printf("\n %d",buffer);break;


    }

}