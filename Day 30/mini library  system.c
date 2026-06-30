#include <stdio.h>

struct Book
{
    int id;
    char name[30];
    char author[20];
};

void display(struct Book b[], int n)
{
    int i;

    printf("\n--- Library Records ---\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook ID : %d", b[i].id);
        printf("\nBook Name : %s", b[i].name);
        printf("\nAuthor : %s\n", b[i].author);
    }
}

int main()
{
    struct Book b[10];
    int n, i;

    printf("Enter Number of Books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Name: ");
        scanf("%s", b[i].name);

        printf("Enter Author Name: ");
        scanf("%s", b[i].author);
    }

    display(b, n);

    return 0;
}