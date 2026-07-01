#include <stdio.h>
#include <string.h>

#define MAX 100

// Function declarations
void addStudent();
void displayStudents();
void searchStudent();
void highestMarks();

int roll[MAX], marks[MAX];
char name[MAX][50];
int n = 0;

int main() {
    int choice;

    do {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Highest Marks\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: highestMarks(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}

// Function to add student
void addStudent() {
    printf("Enter Roll No: ");
    scanf("%d", &roll[n]);

    printf("Enter Name: ");
    scanf("%s", name[n]);

    printf("Enter Marks: ");
    scanf("%d", &marks[n]);

    n++;
    printf("Student added successfully!\n");
}

// Function to display students
void displayStudents() {
    if (n == 0) {
        printf("No records found.\n");
        return;
    }

    printf("\n----- STUDENT LIST -----\n");
    for (int i = 0; i < n; i++) {
        printf("Roll: %d | Name: %s | Marks: %d\n",
               roll[i], name[i], marks[i]);
    }
}

// Function to search student
void searchStudent() {
    int r, found = 0;
    printf("Enter Roll No to search: ");
    scanf("%d", &r);

    for (int i = 0; i < n; i++) {
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
}

// Function to find highest marks
void highestMarks() {
    if (n == 0) {
        printf("No students available.\n");
        return;
    }

    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (marks[i] > marks[maxIndex]) {
            maxIndex = i;
        }
    }

    printf("Highest Scorer:\n");
    printf("Roll: %d | Name: %s | Marks: %d\n",
           roll[maxIndex], name[maxIndex], marks[maxIndex]);
}