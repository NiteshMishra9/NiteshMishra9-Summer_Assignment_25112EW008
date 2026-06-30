#include <stdio.h>

void input(char name[][20], int marks[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nEnter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }
}

void display(char name[][20], int marks[], int n)
{
    int i;
    printf("\n--- Student Records ---\n");
    for(i=0;i<n;i++)
    {
        printf("Name: %s\tMarks: %d\n", name[i], marks[i]);
    }
}

int main()
{
    char name[10][20];
    int marks[10], n;

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    input(name, marks, n);
    display(name, marks, n);

    return 0;
}