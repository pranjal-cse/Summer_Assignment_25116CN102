#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    int bookId[MAX];
    char title[MAX][50];
    char author[MAX][50];
    int available[MAX]; // 1 = available, 0 = issued

    int n = 0, choice, i;

    do {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &bookId[n]);

                printf("Enter Title: ");
                scanf("%s", title[n]);

                printf("Enter Author: ");
                scanf("%s", author[n]);

                available[n] = 1; // default available

                n++;
                printf("Book added successfully!\n");
                break;

            case 2:
                printf("\n----- BOOK LIST -----\n");
                for (i = 0; i < n; i++) {
                    printf("ID: %d | Title: %s | Author: %s | Status: %s\n",
                           bookId[i], title[i], author[i],
                           available[i] ? "Available" : "Issued");
                }
                break;

            case 3: {
                int id, found = 0;
                printf("Enter Book ID to search: ");
                scanf("%d", &id);

                for (i = 0; i < n; i++) {
                    if (bookId[i] == id) {
                        printf("Book Found!\n");
                        printf("ID: %d | Title: %s | Author: %s | Status: %s\n",
                               bookId[i], title[i], author[i],
                               available[i] ? "Available" : "Issued");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");
                break;
            }

            case 4: {
                int id, found = 0;
                printf("Enter Book ID to issue: ");
                scanf("%d", &id);

                for (i = 0; i < n; i++) {
                    if (bookId[i] == id) {
                        if (available[i]) {
                            available[i] = 0;
                            printf("Book issued successfully!\n");
                        } else {
                            printf("Book already issued.\n");
                        }
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");
                break;
            }

            case 5: {
                int id, found = 0;
                printf("Enter Book ID to return: ");
                scanf("%d", &id);

                for (i = 0; i < n; i++) {
                    if (bookId[i] == id) {
                        if (!available[i]) {
                            available[i] = 1;
                            printf("Book returned successfully!\n");
                        } else {
                            printf("Book was not issued.\n");
                        }
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Book not found.\n");
                break;
            }

            case 6:
                printf("Exiting system...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 6);

    return 0;
}