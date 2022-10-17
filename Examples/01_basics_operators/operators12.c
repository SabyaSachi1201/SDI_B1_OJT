#include<stdio.h>
void main()
{
    int a=8,b,c,d;
    b=(a++,++a);
    printf("%d\n",a);
    c=a++,++a;
    printf("%d\n",a);
    d=(a++,++a,a>>2);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    printf("d=%d\n",d);
}