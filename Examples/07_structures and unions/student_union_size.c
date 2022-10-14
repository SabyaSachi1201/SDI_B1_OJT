#include<stdio.h>
union std
{
    int id;
    char *name;
    int age;
}student;
void main()
{
    
    printf("%d",sizeof(student));
}