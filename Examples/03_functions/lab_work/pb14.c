#include<stdio.h>
int function();
main()
{
    int i;
    i=function();
    printf("%d",i);
    return 0;
}
function()
{
    int a;
    a=250;
    return 0;
}
//prints value = 0 , 
//by default not writing a return type of any function , will take it as integer return type.