#include<stdio.h>
void main()
{
    struct bitfields
    {
        int bit_1:1;
        int bit_2:4;
        int bit_3:4;
    }bit;
    printf("%d",sizeof(bit));
}