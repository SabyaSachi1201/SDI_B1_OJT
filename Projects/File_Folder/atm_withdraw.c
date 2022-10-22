int withdraw_init(char acc_number[15],int* account_balance,int pin)
{
    int user_input,amount,count=0,try;
    verify:
    printf("\nEnter the pin to withdraw cash\n");
    scanf("%d",&user_input);
    if(user_input==pin)
    {
        printf("\nEnter the amount you want to withdraw\n");
        scanf("%d",&amount);
        if(*account_balance<amount)
        {
            printf("\nNot enough account balance to withdraw the amount.\n");
        }
        else
        {
            printf("\nProcessing........................WITHDRAWN SUCCESSFULLY!!\n");
            printf("Your account %s has been debited by  %d Rupees",acc_number,amount);
            *account_balance=*account_balance-amount;
            printf("\n Your account %s has balance of %d Rupees.\n",acc_number,*account_balance);
        }
    }
    else if(user_input!=pin)
    {
        count++;
        try=4-count;
        printf("\nINCORRECT.\nYou have %d attempts left.",try);
        if(try==0)
        {
            printf("\nYour Account has been Temporarily Frozen.\nPlease contact your local bank branch to re-activate your account.\n");
            printf("ERROR: UNAUTHORISED ACCESS");
            exit(0);
        }
        goto verify;
    }
    return 0;
}