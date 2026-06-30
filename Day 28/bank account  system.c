#include <stdio.h>

int main()
{
    int accNo, choice;
    char name[20];
    float balance, amount;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", name);

    printf("Enter Opening Balance: ");
    scanf("%f", &balance);

    do
    {
        printf("\n--- Bank Account System ---\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                balance += amount;
                break;

            case 2:
                printf("Enter Withdraw Amount: ");
                scanf("%f", &amount);

                if(amount <= balance)
                    balance -= amount;
                else
                    printf("Insufficient Balance!\n");

                break;

            case 3:
                printf("\nAccount No : %d", accNo);
                printf("\nName       : %s", name);
                printf("\nBalance    : %.2f\n", balance);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}