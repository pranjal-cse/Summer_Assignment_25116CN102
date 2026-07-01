#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    char words[100][50], temp[50];

    printf("Enter number of words: ");
    scanf("%d", &n);

    printf("Enter words:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    // Sort words by length (Bubble Sort)
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}