#include <stdio.h>

int main()
{
    int arr[100], n;
    int i, j, count, maxCount = 0, maxElement;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > maxCount)
        {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("\nMaximum frequency element = %d\n", maxElement);
    printf("Frequency = %d\n", maxCount);

    return 0;
}