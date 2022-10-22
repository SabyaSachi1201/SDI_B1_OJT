#include<stdio.h>
void main(int argc, char* argv[])
{
    while(--argc>0)
    {
        printf("%s ",*++argv);
    }
}
//pr10 jan feb march april
// gives out-put : jan feb march april
