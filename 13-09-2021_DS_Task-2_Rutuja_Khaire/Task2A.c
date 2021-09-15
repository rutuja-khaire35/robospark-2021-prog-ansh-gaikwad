// A.
// Create a structure to specify data of customers in a bank. The data to be stored is: Account number, name and balance in account. Assume maximum of 10 customers in the bank.
// a. Write a function to print the Account number and name of each customer with balance below Rs. 100.
// b. If a customer requests for withdrawal or deposit, it is given in the form:
//         Name, Account No., updated amount, amount withdrawn/deposited, code (1 for deposit, 0 for withdrawal)
//         Also program to give a message "The balance is insufficient for the specified withdrawal." if transaction is not     possible.
// The program should be menu driven, functional and without code redundancy.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct bankDetails
{
    int accNo, bal;
    char name[100];
} customer[10];

void lowBalance(struct bankDetails customer[10])
{
    int i;
    printf("\n\nCustomer with balance below Rs. 100 are: \n");
    printf("\nAccount No\tName\n");
    for (i = 0; i < 10; i++)
    {
        if ((customer[i].bal) < 100)
        {
            printf("%d\t\t %s\n", customer[i].accNo, customer[i].name);
        }
    }
}

int main()
{
    struct bankDetails customer[10];

    int i, choice, accNo, amt;
    for (i = 0; i < 10; i++)
    {
        printf("Enter Account Number of customer %d\n", i + 1);
        scanf("%d", &customer[i].accNo);
        printf("Enter Name of customer %d\n", i + 1);
        scanf("%s", customer[i].name);
        printf("Enter Bank Balance of customer %d\n", i + 1);
        scanf("%d", &customer[i].bal);
    }

    lowBalance(customer);

    printf("\n\nTo perform transaction choose below options:\n");
    printf("Enter 1 for Deposit\nEnter 0 for Withdrawal\n");
    scanf("%d", &choice);

    switch (choice)
    {

    case 1:
        printf("Enter Account number for cash deposit:");
        scanf("%d\n", &accNo);
        printf("Enter the Amount to be deposited:");
        scanf("%d\n", &amt);
        for (i = 0; i < 9; i++)
        {
            if (customer[i].accNo == accNo)
            {
                printf("Amount Deposited Successful!!!\n");
                printf("You have deposited %dRs.\n", amt);
                printf("Your current balance is %d.\n", customer[i].bal + amt);
            }
            else if (customer[i].accNo != accNo)
            {
                printf("Please enter valid Account Number!");
            }
        }
        break;

    case 0:
        printf("Enter Account number for cash Withdrawl: ");
        scanf("%d\n", &accNo);
        printf("Enter the withdrawl amount: ");
        scanf("%d\n", &amt);
        for (i = 0; i < 10; i++)
        {
            if (customer[i].accNo == accNo)
            {
                if (customer[i].bal > amt)
                {
                    printf("Withdrawl Successful!!!\n");
                    printf("You had withdraw %d.\n", amt);
                    printf("Your Current balance is %d.\n", customer[i].bal - amt);
                }
                else
                {
                    printf("Failed to withdraw!!!\n");
                    printf("The balance is insufficient for the specified withdrawal.");
                    break;
                }
            }
            else
            {
                printf("Account not found!");
            }
        }
        break;

    default:
        printf("Invalid Entry!");
    }
}