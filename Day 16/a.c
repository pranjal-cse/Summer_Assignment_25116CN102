#include <stdio.h>

int main() {
    int arr[100], n, i;
    int sum = 0, total, missing;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Input n-1 elements
    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Calculate total sum of numbers from 1 to n
    total = n * (n + 1) / 2;

    // Find the missing number
    missing = total - sum;

    // Display the result
    printf("Missing number = %d", missing);

    return 0;
}

