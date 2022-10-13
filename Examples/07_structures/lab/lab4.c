#include<stdio.h>
int main()
{
    struct C
    {
        double y;
        short int x;
        int z;

    };
    printf("size of struct : %ld\n",sizeof(struct C));
}