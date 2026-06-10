#include <stdio.h>

int main() {
    int n, digit;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;      // get last digit
        product = product * digit;
        n = n / 10;          // remove last digit
    }

    printf("Product of digits = %d", product);

    return 0;
}