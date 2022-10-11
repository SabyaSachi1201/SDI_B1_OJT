#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 distinct numbers");
    scanf("%d %d %d",&a,&b,&c);
   if(a>=b && a>=c)
   {
    printf("%d is largest",a);
   }
   else if(b>=c && b>=a)
   {
    printf("%d is largest",b);
   }
   else if(c>=a && c>=b)
   {
    printf("%d is largest",c);
   }
}