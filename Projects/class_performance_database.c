#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void view(int,int *,char[10][10],char[10][10],char[10][20]);
void locate(int,int *,char[10][10],char[10][10],char[10][20]);
void performance(int,int *,char[10][10],char[10][10],char[10][20]);
void sort(int,int *,char[10][10],char[10][10],char[10][20]);
int main()
{
    int number=10,ar[10]={1,2,3,4,5,6,7,8,9,10},val;
    char name[10][10]={"Ram","Murli","Vijay","Hari","Mohan","Rohan","Akshay","Abhay","Iqbal","Joseph"};
    char branch[10][10]={"cse","eee","eee","ece","eie","cse","eee","ece","ece","eie"};
    char grade[10][20]={"brilliant","excellent","good","good","fail","brilliant","excellent","good","good","fail"};
   
    printf("\nPress 1 to view student details.\nPress 2 to locate student details.\nPress 3 check class performance.\nPress 4 to locate students of a particular branch.\nPress 5 to Exit Menu\n");
    scanf("%d",&val);
    switch(val)
    {
        case 1: view(number,ar,name,branch,grade);break;
        case 2: locate(number,ar,name,branch,grade);break;
        case 3: performance(number,ar,name,branch,grade);break;
        case 4: sort(number,ar,name,branch,grade);break;
        case 5: exit(0);break;
        default: printf("\nChoose correctly!\n");
    }
    return 0;
}
void view(int number,int ar[number],char name[number][10],char branch[number][10],char grade[number][20])
{
    int i;
     printf("\nS.no     Name    branch      grade");
    printf("\n______________________________________\n");

    i=0;
    while(i<number)
    {
        printf("\n %d.     %s     %s      %s \n",ar[i],name[i],branch[i],grade[i]);
        i+=1;
    }
}

void locate(int number,int ar[number],char name[number][10],char branch[number][10],char grade[number][20])
{
    char command[10];
    int set[10],k=0;
    int i;
    int val;
    printf("\nEnter 'brilliant' to find students with O GRADE.\nEnter 'excellent' to find students with E GRADE.\nEnter 'good' to find students with A GRADE.\nEnter 'fail' to find students with F GRADE.\n");
    scanf("%s",command);
    for(i=0;i<number;i++)
    {
        val=strcmp(grade[i],command); //returns 0 if strings are same
       if(val==0)
       {
            set[k]=i;
            k++;
       }
    }
    for(int j=0;j<k;j++)
    {
        printf("%s\t",name[set[j]]);
    }
}
void performance(int number,int ar[number],char name[number][10],char branch[number][10],char grade[number][20])
{
    int i,count_0=0,count_1=0;
    char string1[]="good";
    char string2[]="brilliant";
    char string3[]="excellent";
    char string4[]="fail";
    int val,val1,val2,val3;
    for(i=0;i<number;i++)
    {
        val=strcmp(grade[i],string1);//good
        val1=strcmp(grade[i],string2);//brilliant
        val2=strcmp(grade[i],string3);//excellent
        val3=strcmp(grade[i],string4);//fail
        if(val==0 || val1==0 || val2==0)
        {
            count_0+=1;
        }
        else
        {
            count_1+=1;
        }
    }
    /*printf("\n%d\n",count_0);
    printf("%d",count_1);*/
   if(count_0>count_1)
   {
    printf("\nOverall Good Class Performance\n");
   }
    else if(count_0<count_1)
   {
    printf("\nOverall Bad Class Performance\n");
   }
    else
   {
    printf("\nOverall Average Class Performance\n");
   }
}
void sort(int number,int ar[number],char name[number][10],char branch[number][10],char grade[number][20])
{
    char stream[10];
    int set[10],k=0;
    int i;
    int val;
    printf("\nEnter 'eee' to find students from EEE.\nEnter 'eie' to find students from EIE.\nEnter 'ece' to find students from ECE.\nEnter 'cse' to find students from CSE.\n");
    scanf("%s",stream);
    for(i=0;i<number;i++)
    {
        val=strcmp(branch[i],stream); //returns 0 if strings are same
       if(val==0)
       {
            set[k]=i;
            k++;
       }
    }
    for(int j=0;j<k;j++)
    {
        printf("%s  %s  %s\n",name[set[j]],grade[set[j]],branch[set[j]]);
    }
}