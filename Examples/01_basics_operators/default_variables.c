#include<stdio.h>
int global_variable;
void main()
{
    int default_variable;
    static int static_variable;
    register int register_variable;
    printf("%d\n",default_variable);
    printf("%d\n",static_variable);
   printf("%d\n",register_variable);
    printf("%d\n",global_variable);





}