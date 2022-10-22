#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *p;
    int i=0;
    char name[20];
    int age;
    char gen;
    int count=0;
    p=fopen("student_rec.dat","r");
    if(p==NULL)
    {
        printf("FILE NOT FOUND!");
        exit(0);
    }
    while((fscanf(p,"%[^\t] %d %c",&name,&age,&gen))!=EOF)
     {
       printf("\n%s     %d      %c\n",name,age,gen); 
     }
    fclose(p);

}