#include<stdio.h>
#pragma pack(1);
struct data
{
    unsigned int a:4;
    unsigned char ch:8;
}D;
//D={10,'A'};
void main()
{
    printf("size of data is  %d\n",sizeof(D));
    printf("%u",&D);
}