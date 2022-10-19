#include<stdio.h>
typedef struct st
{
    int roll,age;
    char name[30],gender;
}student;
void main()
{
    char ch;
    student s;
    FILE *p;
    p=fopen("Student.dat","w");
    printf("\n Enter student Details\n");
    while(1)
    {
        printf("\n Enter the student roll number\n");
        scanf("%d",&s.roll);
        printf("\n Enter the student name\n");
        scanf(" %[^\n]",&s.name);
        printf("\n Enter student Age : ");
        scanf("%d",&s.age);
        printf("\n Enter student gender : ");
        scanf(" %c",&s.gender);
        printf("\n Continue.................(Y/N):  ");
        scanf(" %c",&ch);
        fprintf(p,"\n%4d\t%s\t%4d\t%1c",s.roll,s.name,s.age,s.gender);
        if(ch=='n'||ch=='N')
            break;
    }
    fclose(p);
}