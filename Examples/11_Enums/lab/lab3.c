#include<stdio.h>
enum Xenum{C,CPP,JAVA};
void main()
{
    enum Xenum var;
    printf("%d",sizeof(var));
}
