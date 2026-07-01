#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n = 0, choice, i;

    do {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student by Roll No\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Roll No: ");
                scanf("%d", &s[n].roll);

                printf("Enter Name: ");
                scanf("%s", s[n].name);

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                n++;
                printf("Student added successfully!\n");
                break;

            case 2:
                printf("\n----- Student List -----\n");
                for (i = 0; i < n; i++) {
                    printf("Roll: %d | Name: %s | Marks: %.2f\n",
                           s[i].roll, s[i].name, s[i].marks);
                }
                break;

            case 3: {
                int roll, found = 0;
                printf("Enter Roll No to search: ");
                scanf("%d", &roll);

                for (i = 0; i < n; i++) {
                    if (s[i].roll == roll) {
                        printf("Student Found!\n");
                        printf("Roll: %d | Name: %s | Marks: %.2f\n",
                               s[i].roll, s[i].name, s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Student not found.\n");
                }
                break;
            }

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}