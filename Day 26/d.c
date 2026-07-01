#include <stdio.h>

int main() {
    int score = 0;
    int answer;

    printf("===== QUIZ APPLICATION =====\n");

    // Question 1
    printf("\n1. What is the capital of India?\n");
    printf("1) Mumbai\n2) Delhi\n3) Kolkata\n4) Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is Delhi.\n");
    }

    // Question 2
    printf("\n2. Which language is used for system programming?\n");
    printf("1) Python\n2) Java\n3) C\n4) HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C.\n");
    }

    // Question 3
    printf("\n3. How many bits in a byte?\n");
    printf("1) 4\n2) 8\n3) 16\n4) 32\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong! Correct answer is 8.\n");
    }

    printf("\n===== FINAL RESULT =====\n");
    printf("Your score: %d / 3\n", score);

    if (score == 3)
        printf("Excellent!\n");
    else if (score == 2)
        printf("Good job!\n");
    else
        printf("Keep practicing!\n");

    return 0;
}