#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[100];
    int n = 0, choice, i;

    do {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &e[n].id);

                printf("Enter Name: ");
                scanf("%s", e[n].name);

                printf("Enter Salary: ");
                scanf("%f", &e[n].salary);

                n++;
                printf("Employee added successfully!\n");
                break;

            case 2:
                printf("\n----- Employee List -----\n");
                for (i = 0; i < n; i++) {
                    printf("ID: %d | Name: %s | Salary: %.2f\n",
                           e[i].id, e[i].name, e[i].salary);
                }
                break;

            case 3: {
                int id, found = 0;
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);

                for (i = 0; i < n; i++) {
                    if (e[i].id == id) {
                        printf("Employee Found!\n");
                        printf("ID: %d | Name: %s | Salary: %.2f\n",
                               e[i].id, e[i].name, e[i].salary);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Employee not found.\n");
                }
                break;
            }

            case 4: {
                int id, found = 0;
                float newSalary;

                printf("Enter Employee ID to update salary: ");
                scanf("%d", &id);

                for (i = 0; i < n; i++) {
                    if (e[i].id == id) {
                        printf("Enter new salary: ");
                        scanf("%f", &newSalary);
                        e[i].salary = newSalary;
                        printf("Salary updated successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Employee not found.\n");
                }
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