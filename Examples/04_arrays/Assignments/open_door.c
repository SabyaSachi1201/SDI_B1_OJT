#include<stdio.h>
void main()
{
    int count=1;
    char string[]="password";
    char input[8];
    printf("Enter the password\n");
    scanf("%s",input);
   for(int j=0;j<8;j++)
   {
        if(input[j]==string[j])
        {
            count+=1;
        }
   }
   //printf("%d",count);
   if(count==8)
   {
        printf("DOOR OPEN");
   }
   else
   {
        printf("INVALID ACCESS");
   }
}