#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;

        if(freq[str[i]] == 2 && str[i] != '\n') {
            printf("First repeating character = %c", str[i]);
            return 0;
        }
    }

    printf("No repeating character found");

    return 0;
}