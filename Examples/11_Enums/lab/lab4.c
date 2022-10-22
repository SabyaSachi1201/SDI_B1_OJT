#include<stdio.h>
typedef enum{
    male,female=-1
}gender;
void main()
{
    gender val=male;
    gender val1=female;
    printf("%d %d ",val,val1);
}