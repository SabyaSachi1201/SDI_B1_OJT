#include<stdio.h>
void main()
{
    int count=1;
    char string[8]="password";
    char input[8];
    printf("Enter the password\n");
    scanf("%[^\n]s",input);
   /*for(int j=0;j<8;j++)
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
        */
   
   if(string[0]==input[0]&&string[1]==input[1]&&string[2]==input[2]&&string[3]==input[3]&&string[4]==input[4]&&string[5]==input[5]&&string[6]==input[6]&&string[7]==input[7])
   {
    printf("Access");
   }
   else
   {
    printf("\nDenied");
   }
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