#include <stdio.h>
#include <string.h>

struct Contact {
    int id;
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact c[100];
    int n = 0, choice, i;

    do {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact by ID\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Contact ID: ");
                scanf("%d", &c[n].id);

                printf("Enter Name: ");
                scanf("%s", c[n].name);

                printf("Enter Phone Number: ");
                scanf("%s", c[n].phone);

                printf("Enter Email: ");
                scanf("%s", c[n].email);

                n++;
                printf("Contact added successfully!\n");
                break;

            case 2:
                printf("\n----- CONTACT LIST -----\n");
                for (i = 0; i < n; i++) {
                    printf("ID: %d | Name: %s | Phone: %s | Email: %s\n",
                           c[i].id, c[i].name, c[i].phone, c[i].email);
                }
                break;

            case 3: {
                int id, found = 0;

                printf("Enter Contact ID to search: ");
                scanf("%d", &id);

                for (i = 0; i < n; i++) {
                    if (c[i].id == id) {
                        printf("Contact Found!\n");
                        printf("ID: %d | Name: %s | Phone: %s | Email: %s\n",
                               c[i].id, c[i].name, c[i].phone, c[i].email);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Contact not found.\n");
                break;
            }

            case 4: {
                int id, found = 0;

                printf("Enter Contact ID to delete: ");
                scanf("%d", &id);

                for (i = 0; i < n; i++) {
                    if (c[i].id == id) {
                        // shift elements left
                        for (int j = i; j < n - 1; j++) {
                            c[j] = c[j + 1];
                        }
                        n--;
                        printf("Contact deleted successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Contact not found.\n");
                break;
            }

            case 5:
                printf("Exiting system...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}