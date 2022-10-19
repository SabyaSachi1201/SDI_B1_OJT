#include<stdio.h>
void main()
{
    union job
    {
        float salary;
        int worker;
    }j;
    j.salary=12.3;
    j.worker=100;
    printf("Salary=%.1f\n",j.salary);
    printf("Number of workers = %d\n",j.worker);
}