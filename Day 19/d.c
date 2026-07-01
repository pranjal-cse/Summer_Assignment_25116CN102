#include <stdio.h>

int main() {
    int a[10][10], n, i, j;
    int sum = 0;

    // Input the order of the square matrix
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find the sum of diagonal elements
    for(i = 0; i < n; i++) {
        sum += a[i][i];
    }

    // Display the result
    printf("Sum of diagonal elements = %d", sum);

    return 0;
}