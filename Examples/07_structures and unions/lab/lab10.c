#include<stdio.h>
struct course
{
    int courseno;
    char coursename[25];

};
int main()
{
    struct course c[]={{102,"javaa"},{103,"php"},{104,"dotnet"}};
    printf("%d %s\n",c[1].courseno,(*(c+2)).coursename);
}
