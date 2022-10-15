#include<stdio.h>
void add(void);
#define ADDITION() add() //MACROS takes no argument
int main()
{
    ADDITION();
}
void add(void)
{
    printf("\n 10 + 20 = %d\n",10+20);
}