#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the first repeating character
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            continue;

        freq[(int)str[i]]++;

        if (freq[(int)str[i]] == 2) {
            printf("First repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No repeating character found.\n");

    return 0;
}
