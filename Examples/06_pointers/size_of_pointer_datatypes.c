#include<stdio.h>
void main()
{
    int *p;
    float *f;
    char *ch;
    double *d;
    printf("Size of integer pointer is %d.\nSize of float pointer is %d.\nSize of char pointer is %d.\nSize of double pointer is %d.",sizeof(p),sizeof(f),sizeof(ch),sizeof(d));
}