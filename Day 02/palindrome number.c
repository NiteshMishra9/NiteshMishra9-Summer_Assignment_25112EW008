#include <stdio.h>

int main() {
    int n, temp, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (n != 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if (temp == rev)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}