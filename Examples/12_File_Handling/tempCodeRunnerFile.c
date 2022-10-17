#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
void main()
{
    int fd;
    fd=open("hello.txt",O_WRONLY|O_CREAT);
    if(fd==-1)
    {
        printf("Fail to create");
        return;
    }
    else
    {
        printf("File created successfully");
    }
}