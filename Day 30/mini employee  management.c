#include <stdio.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

void display(struct Employee e[], int n)
{
    int i;

    printf("\n--- Employee Details ---\n");
    for(i = 0; i < n; i++)
    {
        printf("ID : %d\n", e[i].id);
        printf("Name : %s\n", e[i].name);
        printf("Salary : %.2f\n\n", e[i].salary);
    }
}

int main()
{
    struct Employee e[10];
    int n, i;

    printf("Enter Number of Employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Enter Employee Name: ");
        scanf("%s", e[i].name);

        printf("Enter Salary: ");
        scanf("%f", &e[i].salary);
    }

    display(e, n);

    return 0;
}