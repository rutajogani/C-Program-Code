#include <stdio.h>
int balance;
void creditMoney();
void debitMoney();
void balanceMoney();

int main()
{
    printf("========================================\n");
    printf("Welcome to SBI \n");
    printf("========================================\n");
    int choice;

    for (int i = 0;; i++)
    {
        printf("1-credit \n");
        printf("2-debit \n");
        printf("3-balance \n");
        printf("4-Exit \n");
        printf("____________________________________\n");
        printf("Enter choice : ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            creditMoney();
            // break;
        }
        else if (choice == 2)
        {
            debitMoney();
            // break;
        }
        else if (choice == 3)
        {
            balanceMoney();
            // break;
        }
        else if (choice == 4)
        {
            printf("------------------------------------\n");
            printf("Bye Bye");
            break;
        }
        else
        {
            printf("------------------------------------\n");
            printf("invalid number\n");
            printf("------------------------------------\n");
        }
    }

    return 0;
}

void creditMoney()
{
    int amount;
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
    printf("Enter amount : ");
    scanf("%d", &amount);
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
    balance += amount;

    printf("----------------------------------------\n");
    printf("Money added successfully ✅\n");
    printf("----------------------------------------\n");
    balanceMoney();
}

void debitMoney()
{
    if (balance == 0)
    {
        printf("No Money\n");
        return;
    }

    int amount;
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
    printf("Exit amount : ");
    scanf("%d", &amount);
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");

    if (balance >= amount)
    {
        balance -= amount;

        printf("----------------------------------------\n");
        printf("Money debited successfully ✅\n");
        printf("----------------------------------------\n");
        balanceMoney();
    }
    else
    {
        printf("No Money\n");
    }
}

void balanceMoney()
{
    printf("----------------------------------------\n");
    printf("Balance : %d\n", balance);
    printf("----------------------------------------\n");
}