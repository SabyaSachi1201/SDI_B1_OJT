#include<stdio.h>
void main()
{
    struct bitfields
    {
        int bit_1;
        int bit_2;
        int bit_3;
        int bit_4;
    }bit;
    printf("%d",sizeof(bit));
}

