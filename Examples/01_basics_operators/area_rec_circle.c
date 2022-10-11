#include<stdio.h>
#include<math.h>
void main()
{
    int radius;
    int len=0,bre=0;
    printf("len and bre of rectangle:");
    scanf("%d%d",&len,&bre);
    printf("circle rad =");
    scanf("%d",&radius);
    printf("area of rectangle is %d\n",len*bre);
    printf("area of circle is %f",3.14*pow(radius,2));
}