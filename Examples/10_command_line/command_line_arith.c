#include<stdio.h>
#include<string.h>
void main(int argc,char* argv[])
{
    int op=0,n,op1=1,i;
    if(strcmp(argv[1],"a")==0)
    {
        for(i=2;i<=3;i++)
        {
         sscanf(argv[i],"%d",&n);
         op=op+n;
        }
        printf(" Addition value is %d",op);
    }
    else if(strcmp(argv[1],"s")==0)
    {
       for(i=2;i<=argc;i++)
        {
        sscanf(argv[i],"%d",&n);
        op=op-n;
        }
        printf(" Substraction value is %d",op);
    } 
     if(strcmp(argv[1],"m")==0)
    {
        for(i=2;i<argc;i++)
        {
         sscanf(argv[i],"%d",&n);
         op1=op1*n;
        }
        printf(" Multiplication value is %d",op1);
    }
     if(strcmp(argv[1],"d")==0)
    {
        for(i=2;i<argc;i++)
        {
         sscanf(argv[i],"%d",&n);
         op1=n/op1;
        }
        printf(" Division value is %d",op1);
    }
}