#include<stdio.h>
struct operaation
{
    int (*fnptr)(int,int);
    int a;
    int b;
}add,sub,mul,div;
int addn(int x, int y)
{
    return x+y;
}
int subn(int x, int y)
{
    return x-y;
}
int muln(int x, int y)
{
    return x*y;
}
int divn(int x, int y)
{
    return y/x;
}
void main()
{
    add.a=5;
    add.b=3;
    sub=add;
    div=add;
    mul=add;
    add.fnptr=addn;
    sub.fnptr=subn;
    mul.fnptr=muln;
    div.fnptr=divn;
    int z=add.fnptr(add.a,add.b);
    int z1=sub.fnptr(sub.a,sub.b);
    int z2=div.fnptr(div.a,div.b);
    int z3=mul.fnptr(mul.a,mul.b);
    printf("%d %d %d %d",z,z1,z2,z3);

}
