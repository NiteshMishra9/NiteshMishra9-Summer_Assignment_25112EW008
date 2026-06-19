#include <stdio.h>
#include <math.h>

int armstrong(int n)
{
    int temp = n, sum = 0, digits = 0, rem;

    // Count digits
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    // Calculate sum of powers
    while (temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if (sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}