int deposit(char acc_number[15],int* account_balance,int pin)
{
     int amount,user_input;
    again:
    printf("\nEnter the pin to deposit cash\n");
    scanf("%d",&user_input);
    if(user_input==pin)
    {
        printf("\nEnter the amount you want to deposit\n");
        scanf("%d",&amount);
        printf("\nPlace your cash gently on the cash tray.\n");
        printf("\nProcessing........................DEPOSITED SUCCESSFULLY!!\n");
        printf("Your account %s has been credited by %d Rupees",acc_number,amount);
        *account_balance=*account_balance+amount;
        printf("\n Your account %s has balance of %d Rupees\n",acc_number,*account_balance);
    }
    else if(user_input!=pin)
    {
        printf("\n Please try again.\n");
        goto again;
    }
    return 0;
}