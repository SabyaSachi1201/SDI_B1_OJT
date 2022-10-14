#include<stdio.h>
struct employee{
    char *name;
    int id;
    int age;
    int salary;
}s;
int manager()
{
    printf("\nEnter age\n");
    scanf("%d",&s.age);
    if(s.age>25)
    {
        s.salary=500000;
    }
    else
    {
        
        s.salary=100000;

    }
    printf("\nEmployee age is %d\n",s.age);
    printf("Employee salary is %d\n",s.salary);

}
void main()
{
    s.id=12003233;
    s.name="Sabya";
    printf("Employee name is %s\n",s.name);
    printf("Employee id is %d\n",s.id);
    manager();


    



}