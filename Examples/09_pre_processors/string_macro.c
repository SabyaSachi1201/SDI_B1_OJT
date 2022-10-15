#include<stdio.h>
void disp(char *);
#define STRING(s) disp(s)
int main()
{
    STRING("HELLO");
    STRING("WORLD");
}
void disp(char *p)
{
    printf("%s \n",p);
}