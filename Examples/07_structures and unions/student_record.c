#include<stdio.h>
#include<string.h>
struct
{
    char  name[10];
    float height;
    int id; 
}student;
void main()
{

    printf("Enter Student name :\n");
    scanf("%[^\n]s",student.name);
    printf("Enter Student id :\n");
    scanf("%d",&student.id);
    printf("Enter Student height :\n");
    scanf("%f",&student.height);
    printf("%s\n",student.name);
    printf("%d\n",student.id);
    printf("%f",student.height);
}