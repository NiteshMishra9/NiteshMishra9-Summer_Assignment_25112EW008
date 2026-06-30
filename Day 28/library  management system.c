#include <stdio.h>

struct Book
{
    int id;
    char name[30];
    char author[30];
};

int main()
{
    struct Book b[10];
    int n, i;

    printf("Enter number of books: ");
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

    printf("\n----- Library Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook ID : %d", b[i].id);
        printf("\nBook Name : %s", b[i].name);
        printf("\nAuthor : %s\n", b[i].author);
    }

    return 0;
}