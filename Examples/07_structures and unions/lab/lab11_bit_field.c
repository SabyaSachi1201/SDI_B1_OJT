#include<stdio.h>
void main()
{
    struct bitfields
    {
        int bit_1:2;
        int bit_2:4;
        int bit_3:4;
        int bit_4:3;
    }bit={2,3,8,7};
    printf("%d %d %d %d",bit.bit_1,bit.bit_2,bit.bit_3,bit.bit_4);
}