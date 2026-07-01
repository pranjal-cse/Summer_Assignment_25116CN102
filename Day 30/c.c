#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    int id[MAX];
    char name[MAX][50];
    float salary[MAX];

    int n = 0, choice, i;

    do {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Find Highest Salary\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &id[n]);

                printf("Enter Name: ");
                scanf("%s", name[n]);

                printf("Enter Salary: ");
                scanf("%f", &salary[n]);

                n++;
                printf("Employee added successfully!\n");
                break;

            case 2:
                printf("\n----- EMPLOYEE LIST -----\n");
                for (i = 0; i < n; i++) {
                    printf("ID: %d | Name: %s | Salary: %.2f\n",
                           id[i], name[i], salary[i]);
                }
                break;

            case 3: {
                int key, found = 0;
                printf("Enter Employee ID to search: ");
                scanf("%d", &key);

                for (i = 0; i < n; i++) {
                    if (id[i] == key) {
                        printf("Employee Found!\n");
                        printf("ID: %d | Name: %s | Salary: %.2f\n",
                               id[i], name[i], salary[i]);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Employee not found.\n");
                break;
            }

            case 4: {
                if (n == 0) {
                    printf("No employees available.\n");
                    break;
                }

                int maxIndex = 0;
                for (i = 1; i < n; i++) {
                    if (salary[i] > salary[maxIndex]) {
                        maxIndex = i;
                    }
                }

                printf("Highest Paid Employee:\n");
                printf("ID: %d | Name: %s | Salary: %.2f\n",
                       id[maxIndex], name[maxIndex], salary[maxIndex]);
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