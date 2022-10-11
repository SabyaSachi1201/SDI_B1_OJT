#include<stdio.h>
void main()
{
    int x=10,y=20,z=30,g;
    x>y && x>z?g=x:(y>x && y>z)?:g=y:g=z;
    printf("%d",g);
}