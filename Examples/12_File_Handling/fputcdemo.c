#include<stdio.h>
void main()
{
    FILE *p;
    p=fopen("fputcdemo.txt","w");
    if(p==NULL)
    {
        printf("\n File not created\n");
    }
    else
    {
        printf("\n File created\n");
        fprintf(p,"I_CAN_BE_BLUE_I_CAN_BE_BROWN");
        fputc('A',p);
        fclose(p);

    }


}