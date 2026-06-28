//Bank Management System
#include <stdio.h>
#include <string.h>
struct account
{
    int accNo;
    char name[50];
    float balance;
};
int main()
{
    struct account bank[100];
    int choice, count = 0;
    int i, j, accNo, found;
    float amount;
    do
    {
        printf("\n========== BANK ACCOUNT MANAGEMENT SYSTEM ==========\n");
        printf("1. Create Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Search Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Delete Account\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            {
                if(count == 100)
                {
                    printf("Bank Database is Full!\n");
                    break;
                }
                printf("Enter Account Number: ");
                scanf("%d", &bank[count].accNo);
                printf("Enter Account Holder Name: ");
                scanf(" %[^\n]", bank[count].name);
                printf("Enter Initial Balance: ");
                scanf("%f", &bank[count].balance);
                count++;
                printf("Account Created Successfully!\n");
                break;
            }
            case 2:
            {
                if(count == 0)
                {
                    printf("No Accounts Found!\n");
                }
                else
                {
                    printf("\n========== ACCOUNT DETAILS ==========\n");
                    for(i = 0; i < count; i++)
                    {
                        printf("\nAccount %d\n", i + 1);
                        printf("Account Number : %d\n", bank[i].accNo);
                        printf("Holder Name    : %s\n", bank[i].name);
                        printf("Balance        : %.2f\n", bank[i].balance);
                        printf("-------------------------------------\n");
                    }
                }
                break;
            }
            case 3:
            {
                printf("Enter Account Number to Search: ");
                scanf("%d", &accNo);
                found = 0;
                for(i = 0; i < count; i++)
                {
                    if(bank[i].accNo == accNo)
                    {
                        printf("\nAccount Found!\n");
                        printf("Account Number : %d\n", bank[i].accNo);
                        printf("Holder Name    : %s\n", bank[i].name);
                        printf("Balance        : %.2f\n", bank[i].balance);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Account Not Found!\n");
                }
                break;
            }
            case 4:
            {
                printf("Enter Account Number: ");
                scanf("%d", &accNo);
                found = 0;
                for(i = 0; i < count; i++)
                {
                    if(bank[i].accNo == accNo)
                    {
                        found = 1;
                        printf("Enter Amount to Deposit: ");
                        scanf("%f", &amount);
                        bank[i].balance = bank[i].balance + amount;
                        printf("Amount Deposited Successfully!\n");
                        printf("Updated Balance = %.2f\n", bank[i].balance);
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Account Not Found!\n");
                }
                break;
            }
            case 5:
            {
                printf("Enter Account Number: ");
                scanf("%d", &accNo);
                found = 0;
                for(i = 0; i < count; i++)
                {
                    if(bank[i].accNo == accNo)
                    {
                        found = 1;
                        printf("Enter Amount to Withdraw: ");
                        scanf("%f", &amount);
                        if(amount <= bank[i].balance)
                        {
                            bank[i].balance = bank[i].balance - amount;
                            printf("Withdrawal Successful!\n");
                            printf("Remaining Balance = %.2f\n", bank[i].balance);
                        }
                        else
                        {
                            printf("Insufficient Balance!\n");
                        }
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Account Not Found!\n");
                }
                break;
            }
            case 6:
            {
                printf("Enter Account Number to Delete: ");
                scanf("%d", &accNo);
                found = 0;
                for(i = 0; i < count; i++)
                {
                    if(bank[i].accNo == accNo)
                    {
                        for(j = i; j < count - 1; j++)
                        {
                            bank[j] = bank[j + 1];
                        }
                        count--;
                        found = 1;
                        printf("Account Deleted Successfully!\n");
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Account Not Found!\n");
                }
                break;
            }
            case 7:
            {
                printf("Thank You for Using the Bank Account Management System!\n");
                break;
            }
            default:
            {
                printf("Invalid Choice!\n");
                break;
            }
        }
    }while(choice != 7);
    return 0;
}