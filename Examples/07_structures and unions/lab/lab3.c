#include<stdio.h>
int main()
{
    struct C
    {
        int z;
        double y;
        short int x;

    };
    printf("size of struct : %ld\n",sizeof(struct C));
}