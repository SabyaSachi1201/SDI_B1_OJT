#include<stdio.h>
void main()
{
    int i=1;
    if(!i)
    printf("Phytec,");
    else
    {
        i=0;
        printf("C-Program");
        main();
    }
}
//prints C-Program infinitely