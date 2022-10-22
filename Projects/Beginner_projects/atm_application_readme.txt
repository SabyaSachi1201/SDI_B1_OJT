Problem description - To create a menu driven, interactive ATM application.

Apart from the main function , The application is divided into 3 different functions, having unique purposes.
1. withdraw() function
2. deposit() function
3.checkbal() function
Outside the main function the account_balance has been declared , as a global variable(for the purpose of program-scoping the variable).
Inside the main function, the account number is taken by default as a character array , and an atm pin of  integer value 3211 has been assumed.
The functions declarations of  withdraw(),description(),checkbal(),have a character array , an integer pointer and an integer.
Since this is a menu driven program, switch-case statements are used to control the program flow.
_________________________________________________________________________________________________________________________________________________
1. withdraw() function:

first, the user is asked to enter the pin. 
If pin is matched correctly, the user is allowed to type in the amount.
If pin is incorrect, the user is asked again to input the pin. 
A counter is placed inside the condition checking block , when the pin is not matched , it counts the number of attempts by the user.
The maximum nummber of allowable attempts are 4 , each time the user enters a wrong pin , the counter increments , and the number of attempts
left is decremented by 1. The number of attempts , are always shown to the user.
If the counter reaches value 4, a message is displayed , saying that the account is temporarily frozen, and an ERROR message is shown and program 
is exited.

If the pin is matched correctly, an amount is asked to be enterred by the user, if the amount is more than the account balance , a warning is 
displayed. Else , the amount is deduced from the account balance , and the remaining balance is displayed.
_________________________________________________________________________________________________________________________________________________
2. deposit() function:
first, the user is asked to enter the pin. 
If pin is matched correctly, the user is allowed to type in the amount.the amount is added to the account balance ,
 and the remaining balance is displayed.
The account balance is updated accordingly.
If pin is incorrect, the user is asked again to input the pin. 
___________________________________________________________________________________________________________________________________________________
3. checkbal() function:
first, the user is asked to enter the pin. 
If pin is matched correctly, the account balance is displayed to thee user.
If pin is incorrect, the user is asked again to input the pin. 
___________________________________________________________________________________________________________________________________________________
Here, the account_balance variable is called by reference, as it is constantly being updated after every operation(withdrawal/deposit).
The other two arguments, i.e the account number and the pin are being called by values.
____________________________________________________________________________________________________________________________________________________