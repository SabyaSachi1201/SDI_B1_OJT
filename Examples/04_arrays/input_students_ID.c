#include<stdio.h>
void main()
{
    int studentID[10];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&studentID[i]);
    }
    printf("The student IDS are:\n");
    for(i=0;i<10;i++)
    {
        printf(" val=%d address=%d\n ",studentID[i],&studentID[i]);
    }
}
