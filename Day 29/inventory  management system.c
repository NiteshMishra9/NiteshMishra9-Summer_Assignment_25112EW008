#include <stdio.h>

struct Item
{
    int id, quantity;
    char name[20];
    float price;
};

int main()
{
    struct Item i[10];
    int n, j;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for(j = 0; j < n; j++)
    {
        printf("\nEnter Item ID: ");
        scanf("%d", &i[j].id);

        printf("Enter Item Name: ");
        scanf("%s", i[j].name);

        printf("Enter Quantity: ");
        scanf("%d", &i[j].quantity);

        printf("Enter Price: ");
        scanf("%f", &i[j].price);
    }

    printf("\n----- Inventory Details -----\n");

    for(j = 0; j < n; j++)
    {
        printf("\nItem ID : %d", i[j].id);
        printf("\nName    : %s", i[j].name);
        printf("\nQuantity: %d", i[j].quantity);
        printf("\nPrice   : %.2f\n", i[j].price);
    }

    return 0;
}