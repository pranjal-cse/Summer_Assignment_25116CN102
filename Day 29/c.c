#include <stdio.h>
#include <string.h>

int main() {
    char str[200], temp[200];
    int choice, i, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // remove newline if present
    str[strcspn(str, "\n")] = '\0';

    do {
        printf("\n===== STRING OPERATIONS SYSTEM =====\n");
        printf("1. Display String\n");
        printf("2. Find Length\n");
        printf("3. Reverse String\n");
        printf("4. Copy String\n");
        printf("5. Compare Strings\n");
        printf("6. Concatenate String\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // to consume leftover newline

        switch(choice) {

            case 1:
                printf("String: %s\n", str);
                break;

            case 2:
                len = 0;
                while (str[len] != '\0') {
                    len++;
                }
                printf("Length of string = %d\n", len);
                break;

            case 3:
                len = strlen(str);
                for (i = 0; i < len / 2; i++) {
                    char t = str[i];
                    str[i] = str[len - i - 1];
                    str[len - i - 1] = t;
                }
                printf("String reversed successfully!\n");
                break;

            case 4:
                strcpy(temp, str);
                printf("Copied string: %s\n", temp);
                break;

            case 5:
                printf("Enter another string to compare: ");
                fgets(temp, sizeof(temp), stdin);
                temp[strcspn(temp, "\n")] = '\0';

                if (strcmp(str, temp) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 6:
                printf("Enter string to concatenate: ");
                fgets(temp, sizeof(temp), stdin);
                temp[strcspn(temp, "\n")] = '\0';

                strcat(str, temp);
                printf("After concatenation: %s\n", str);
                break;

            case 7:
                printf("Exiting system...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 7);

    return 0;
}