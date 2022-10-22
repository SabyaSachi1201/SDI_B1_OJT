void checkbal(char acc_number[15],int* account_balance,int pin)
{
    int user_input;
    again1:
    printf("\nEnter the pin to view acc. balance\n");
    scanf("%d",&user_input);
    if(user_input==pin)
    {
        printf("\n Your account %s has balance of %d Rupees\n",acc_number,*account_balance);
    }
    else
    {
        printf("\n Please try again.\n");
        goto again1;
    }
}
