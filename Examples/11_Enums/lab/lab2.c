#include<stdio.h>
int main()
{
    enum status{pass,fail,absent};
    enum status std1,std2,std3;
    std1=pass;
    std2=absent;
    std3=fail;
    printf("%d %d %d",std1,std2,std3);
}