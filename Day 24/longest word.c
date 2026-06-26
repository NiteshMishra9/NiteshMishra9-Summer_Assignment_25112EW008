#include <stdio.h>
#include <string.h>

int main() {
    char str[100], longest[100];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char word[100];

    while (str[i] != '\0') {
        j = 0;

        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j] = str[i];
            j++;
            i++;
        }

        word[j] = '\0';

        if (j > maxLen) {
            maxLen = j;
            strcpy(longest, word);
        }

        if (str[i] != '\0')
            i++;
    }

    printf("Longest word = %s", longest);

    return 0;
}