#include <stdio.h>

int main() {
    int rows, i, j;
    char ch;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {

        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print increasing characters
        for (ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c", ch);
        }

        // Print decreasing characters
        for (ch = 'A' + i - 2; ch >= 'A'; ch--) {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}