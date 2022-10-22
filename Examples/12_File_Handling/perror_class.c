#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<errno.h>
void main()
{
    int p;
    p=open("hello.txt",O_RDONLY);
   
        printf("THE ERROR NUMBER IS %d\n",errno);
       // printf("THE ERROR MESSAGE IS %s\n",strerror(errno));
        perror("\nMessage from perror\n");
}