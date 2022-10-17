#include<stdio.h>
void main()
{
    struct bitfields
    {
        int bit_1:1;
        int bit_2:4;
        int bit_3:4;
    }bit={1,2,13};
    printf("%d %d %d",bit.bit_1,bit.bit_2,bit.bit_3);
}