#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    int m1, m2, m3;
    int total;
    float percentage;
};

int main() {
    struct Student s[100];
    int n = 0, choice, i;

    do {
        printf("\n===== MARKSHEET GENERATION SYSTEM =====\n");
        printf("1. Add Student Marks\n");
        printf("2. Display Marksheet\n");
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

                printf("Enter Marks of 3 Subjects: ");
                scanf("%d %d %d", &s[n].m1, &s[n].m2, &s[n].m3);

                // Calculate total and percentage
                s[n].total = s[n].m1 + s[n].m2 + s[n].m3;
                s[n].percentage = s[n].total / 3.0;

                n++;
                printf("Record added successfully!\n");
                break;

            case 2:
                printf("\n----- MARKSHEET -----\n");
                for (i = 0; i < n; i++) {
                    printf("Roll: %d | Name: %s\n", s[i].roll, s[i].name);
                    printf("Marks: %d %d %d\n", s[i].m1, s[i].m2, s[i].m3);
                    printf("Total: %d | Percentage: %.2f%%\n", s[i].total, s[i].percentage);

                    if (s[i].percentage >= 75)
                        printf("Grade: A\n");
                    else if (s[i].percentage >= 60)
                        printf("Grade: B\n");
                    else if (s[i].percentage >= 40)
                        printf("Grade: C\n");
                    else
                        printf("Grade: Fail\n");

                    printf("-------------------------\n");
                }
                break;

            case 3: {
                int roll, found = 0;
                printf("Enter Roll No to search: ");
                scanf("%d", &roll);

                for (i = 0; i < n; i++) {
                    if (s[i].roll == roll) {
                        printf("\nStudent Found!\n");
                        printf("Roll: %d | Name: %s\n", s[i].roll, s[i].name);
                        printf("Total: %d | Percentage: %.2f%%\n", s[i].total, s[i].percentage);
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
                printf("Exiting system...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}