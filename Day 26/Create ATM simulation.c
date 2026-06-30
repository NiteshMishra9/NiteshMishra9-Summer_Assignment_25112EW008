#include <stdio.h>

int main()
{
    int pin = 1234, enteredPin;
    int choice;
    float balance = 10000, amount;

    printf("====== ATM SIMULATION ======\n");
    printf("Enter your 4-digit PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin)
    {
        printf("Wrong PIN! Access Denied.\n");
        return 0;
    }

    do
    {
        printf("\n------ ATM MENU ------\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Your Balance: ₹%.2f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if (amount > 0)
                {
                    balance = balance + amount;
                    printf("₹%.2f deposited successfully.\n", amount);
                }
                else
                {
                    printf("Invalid amount!\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Invalid amount!\n");
                }
                else if (amount > balance)
                {
                    printf("Insufficient Balance!\n");
                }
                else
                {
                    balance = balance - amount;
                    printf("Please collect your cash.\n");
                    printf("Remaining Balance: ₹%.2f\n", balance);
                }
                break;

            case 4:
                printf("Thank you for using our ATM.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}