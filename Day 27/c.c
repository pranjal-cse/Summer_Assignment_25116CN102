#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main() {
    struct Employee e[100];
    int n = 0, choice, i;

    do {
        printf("\n===== SALARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display All Salaries\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &e[n].id);

                printf("Enter Name: ");
                scanf("%s", e[n].name);

                printf("Enter Basic Salary: ");
                scanf("%f", &e[n].basic);

                // Salary calculation
                e[n].hra = 0.20 * e[n].basic;
                e[n].da  = 0.10 * e[n].basic;
                e[n].gross = e[n].basic + e[n].hra + e[n].da;

                n++;
                printf("Salary details added successfully!\n");
                break;

            case 2:
                printf("\n----- Salary Details -----\n");
                for (i = 0; i < n; i++) {
                    printf("ID: %d | Name: %s | Basic: %.2f | HRA: %.2f | DA: %.2f | Gross: %.2f\n",
                           e[i].id, e[i].name, e[i].basic, e[i].hra, e[i].da, e[i].gross);
                }
                break;

            case 3: {
                int id, found = 0;
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);

                for (i = 0; i < n; i++) {
                    if (e[i].id == id) {
                        printf("Employee Found!\n");
                        printf("ID: %d | Name: %s | Basic: %.2f | HRA: %.2f | DA: %.2f | Gross: %.2f\n",
                               e[i].id, e[i].name, e[i].basic, e[i].hra, e[i].da, e[i].gross);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Employee not found.\n");
                }
                break;
            }

            case 4:
                printf("Exiting system...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}