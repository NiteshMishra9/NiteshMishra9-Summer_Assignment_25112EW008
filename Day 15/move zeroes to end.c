#include <stdio.h>

int main()
{
    int arr[100], n, temp[100];
    int j = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Store non-zero elements
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            temp[j++] = arr[i];
        }
    }

    // Fill remaining positions with 0
    while(j < n)
    {
        temp[j++] = 0;
    }

    printf("Array after moving zeroes to end:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }

    return 0;
}