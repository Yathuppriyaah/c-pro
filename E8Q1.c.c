#include <stdio.h>
#include <stdlib.h>
//Function Declaration......
int fun_deposit(int);

//
int main()
{

    int balance = 40000;
    int option;
    int call_withdraw;
    int call_deposit;
    int call_balance;

    printf("Welcome to the ABC Bank!\n\n");
    printf("1. Deposit\n2. Withdraw\n3. Check Balance\n\n");
    printf("Enter Option Number: ");
    scanf("%d",&option);

//---------------------------ALL FUNCTIONS --DEFINION---------------------------------|||
    int fun_deposit(balance)
    {
        int deposit;
        printf("Enter amount to deposit:");
        scanf("%d",&deposit);
        balance=balance+deposit;
        printf("Now Your Current Balance: %d \n\n",balance);
    }
    int fun_withdraw(balance)
    {
        int withdraw;
        printf("Enter amount to withdraw: ");
        scanf("%d",&withdraw);
        if (balance<withdraw)
        {
        printf("Your balance is not sufficient to withdraw that amount of money\n");
        }
        else
        {
        balance=balance-withdraw;
        printf("Now Your Current Balance: %d \n\n",balance);
        }
    }
    int fun_balance(balance)
    {
        printf("Now Your Current Balance: %d \n\n",balance);
    }
//-----------------------------------------------------------------------------------------------//

//--------------------------CALL FUNCTION--------------------------------------------------------//
    if (option==1)
    {
        call_deposit=fun_deposit(balance);
    }
    else if(option==2)
    {
        call_withdraw=fun_withdraw(balance);
    }
    else if(option==3)
    {
        call_balance=fun_balance(balance);
    }
//-----------------------------------------------------------------------------------------------//
    return 0;
}
