#include<stdio.h>
void main()
{
    int x=20,*y,*z;
    y=&x;
    z=y;
    *y++;
    *z++;
    x++;
    printf("%d %d %d",x,y,z);
}