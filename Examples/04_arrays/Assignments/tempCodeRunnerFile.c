#include<stdio.h>
void main()
{
    int count=1;
    char string[8]="password";
    char input[8];
    printf("Enter the password\n");
    scanf("%s",input);
   for(int j=0;j<=8;j++)
   {
        if(input[j]==string[j])
        {
            if(input[j]=='\0')
            {
                break;
            }
        }
        else
        {
            printf("Invalid\n");
        }
   }
   printf("Access");
   //printf("%d",count);
   /*if(count==8)
   {
        printf("DOOR OPEN");
   }
   else
   {
        printf("INVALID ACCESS");
   }
   */
}