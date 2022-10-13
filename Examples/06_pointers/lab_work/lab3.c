#include<stdio.h>
void fun(char**);
void main()
{
    char *arr[]={"bat","cat","fat","hat","mat","pat"};
    fun(arr);
}
void fun(char **p)
{
    char *t;
    t=(p+=sizeof(int))[-1];
    printf("%s\n",t);
}