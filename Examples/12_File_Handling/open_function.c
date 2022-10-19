#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
void main()
{
    int fd;
    fd=open("hello1.txt",O_WRONLY|O_CREAT);
    printf("\n value of fd is %d\n",fd);
    if(fd==-1)
    {
        printf("Fail to create");
        return;
    }
    
    printf("File created successfully");
    printf("\n value of fd is %d\n",fd);
    getchar();
    fclose(fd);
}

