#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    int roll[MAX];
    char name[MAX][50];
    int marks[MAX];
    int n = 0, choice, i;

    do {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search by Roll No\n");
        printf("4. Find Highest Marks\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Roll No: ");
                scanf("%d", &roll[n]);

                printf("Enter Name: ");
                scanf("%s", name[n]);

                printf("Enter Marks: ");
                scanf("%d", &marks[n]);

                n++;
                printf("Student added successfully!\n");
                break;

            case 2:
                printf("\n----- STUDENT LIST -----\n");
                for (i = 0; i < n; i++) {
                    printf("Roll: %d | Name: %s | Marks: %d\n",
                           roll[i], name[i], marks[i]);
                }
                break;

            case 3: {
                int r, found = 0;
                printf("Enter Roll No to search: ");
                scanf("%d", &r);

                for (i = 0; i < n; i++) {
                    if (roll[i] == r) {
                        printf("Student Found!\n");
                        printf("Roll: %d | Name: %s | Marks: %d\n",
                               roll[i], name[i], marks[i]);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Student not found.\n");
                break;
            }

            case 4: {
                if (n == 0) {
                    printf("No students available.\n");
                    break;
                }

                int maxIndex = 0;
                for (i = 1; i < n; i++) {
                    if (marks[i] > marks[maxIndex]) {
                        maxIndex = i;
                    }
                }

                printf("Highest Scorer:\n");
                printf("Roll: %d | Name: %s | Marks: %d\n",
                       roll[maxIndex], name[maxIndex], marks[maxIndex]);
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