#include <stdio.h>
void main(){
   int intVar=20,x;
   x= ++intVar,intVar++,++intVar;
   printf("Value of intVar=%d, x=%d",intVar,x);
}