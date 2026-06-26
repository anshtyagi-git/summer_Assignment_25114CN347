// ATM Simulation
#include <stdio.h>
int main()
{
    int choice;
    float balance = 10000.0, deposit, withdraw;
    printf("Welcome to Bank of Bharat!\n");
    do
    {
        printf("*****ATM MENU*****\n");
        printf("1.Check Balance\n2.Deposit\n3.Withdraw\n4.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Bank Balance: ₹%0.2f\n", balance);
            break;
        case 2:
            printf("Enter the amount to deposit:");
            scanf("%f", &deposit);
            balance = balance + deposit;
            printf("Updated Bank Balance: ₹%0.2f\n", balance);
            break;
        case 3:
            printf("Enter the amount to withdraw:");
            scanf("%f", &withdraw);
            if (withdraw <= balance)
            {
                balance = balance - withdraw;
                printf("Updated Bank Balance: ₹%0.2f\n", balance);
            }
            else
            {
                printf("Insufficient Bank Balance!\n");
            }
            break;
        case 4:
            printf("Thanks for using the ATM!\nHave a good day!\n");
        }
    }while(choice!=4);
    return 0;
}
