#include <stdio.h>

// Function to check Armstrong number
int isArmstrong(int n) {
    int original = n, digit, sum = 0;

    while (n > 0) {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n /= 10;
    }

    return (original == sum);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong Number.\n", num);
    else
        printf("%d is not an Armstrong Number.\n", num);

    return 0;
}