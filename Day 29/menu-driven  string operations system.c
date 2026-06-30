#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50];
    int choice;

    printf("Enter First String: ");
    scanf("%s", str1);

    do
    {
        printf("\n--- String Operations ---\n");
        printf("1. String Length\n");
        printf("2. Copy String\n");
        printf("3. Compare Strings\n");
        printf("4. Concatenate Strings\n");
        printf("5. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(str2, str1);
                printf("Copied String = %s\n", str2);
                break;

            case 3:
                printf("Enter Second String: ");
                scanf("%s", str2);

                if(strcmp(str1, str2) == 0)
                    printf("Strings are Equal\n");
                else
                    printf("Strings are Not Equal\n");
                break;

            case 4:
                printf("Enter Second String: ");
                scanf("%s", str2);

                strcat(str1, str2);
                printf("Concatenated String = %s\n", str1);
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}