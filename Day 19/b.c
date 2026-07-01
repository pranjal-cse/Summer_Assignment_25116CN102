#include <stdio.h>

int main() {
    int a[10][10], b[10][10], diff[10][10];
    int rows, cols, i, j;

    // Input the number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Subtract the matrices
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    // Display the result
    printf("Difference of the matrices:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}