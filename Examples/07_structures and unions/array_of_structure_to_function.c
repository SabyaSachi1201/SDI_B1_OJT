#include<stdio.h>
struct stud
{
    int roll;
    char *name;
}arr[3];
void display(struct stud arr[]);
void main()
{
    arr[0].roll=9;
    arr[0].name="sabya";
    arr[1].roll=10;
    arr[1].name="Dibya";
    arr[2].roll=11;
    arr[2].name="Biswa";
    display(arr);
}
void display(struct stud arr[])
{
    for(int i=0;i<3;i++)
    {
        printf("%d %s\n",arr[i].roll,arr[i].name);
    }
}