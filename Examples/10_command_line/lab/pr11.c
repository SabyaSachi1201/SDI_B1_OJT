#include<stdio.h>
void main(int argc,char* argv[])
{
    int i;
    for(i=1;i<argc;i++)
    {
        printf("%c",argv[i][0]);
    }
}
//pr11 one two three
//gives output  : ott