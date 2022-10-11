#include<stdio.h>
int a,b; //global variables have scope throughout program.
int initialise()
{
    a=10,b=20;
}
void swap()
{
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d\n",a,b);
}
void main()
{   initialise();
    printf("%d %d\n",a,b);
    swap();
    printf("%d %d\n",a,b);
}