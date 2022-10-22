#include<stdio.h>
#include<stdlib.h>
#include"atm_extent.h"
int account_balance=0;
void main()
{
    int pin=3211; //let 3211 be the pin for the particular account which the user wants to access.
    char acc_number[15]="XXXXXX7274";
    int choice;
    while(1)
    {
    recheck:
    printf("\nPress 1 to withdraw money from Account.\nPress 2 to deposit cash.\nPress 3 to check your balance.\nPress 4 to exit.\n");
    scanf("%d",&choice);
    switch(choice)
        {
        case 1:withdraw_init(acc_number,&account_balance,pin);break;
        case 2:deposit(acc_number,&account_balance,pin);break;
        case 3:checkbal(acc_number,&account_balance,pin);break;
        case 4:exit(0);break;
        default: printf("\nINVALID OPTION!\nTRY AGAIN!\n");
                 goto recheck;
        }
    }
}
