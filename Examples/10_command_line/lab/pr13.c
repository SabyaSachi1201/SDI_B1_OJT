#include<stdio.h>
void main(int sizeofargv, char *argv[])
{
    while(sizeofargv)
    {
        printf("%s  ",argv[--sizeofargv]);
    }
}
//pb13 sunday monday tuesday
//return value: tuesday monday sunday pb13