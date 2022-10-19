#include<stdio.h>
union unionjob
{
    char name[32];
    float salary;
    int workerNo;
}ujob;

struct structjob
{
    char name[32];
    float salary;
    int workerNo;
}sjob;

void main()
{
    printf("size of union %d\n",sizeof(ujob));
    printf("size of struct %d\n",sizeof(sjob));

}
