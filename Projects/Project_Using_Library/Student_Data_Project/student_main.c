#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"students_header.h"
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
        case 1: view_init(number,ar,name,branch,grade);break;
        case 2: locate(number,ar,name,branch,grade);break;
        case 3: performance(number,ar,name,branch,grade);break;
        case 4: sort(number,ar,name,branch,grade);break;
        case 5: exit(0);break;
        default: printf("\nChoose correctly!\n");
    }
    return 0;
}