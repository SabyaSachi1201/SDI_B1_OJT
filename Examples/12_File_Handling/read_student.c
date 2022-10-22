#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *p;
    int i=0;
    char name[20];
    int age;
    char gen;
    p=fopen("student_rec.dat","r");
    if(p==NULL)
    {
        printf("FILE NOT FOUND!");
        exit(0);
    }
    while((fscanf(p,"%[^\t] %d %c",&name,&age,&gen))==1)
     {
       printf("\n%s     %d      %c \n",name,age,gen); 
       //found = 1;
     }
    //  if(found ==0)
    //  {
    //     printf("")
    //  }
    fclose(p);

}