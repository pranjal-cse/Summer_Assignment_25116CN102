#include <stdio.h>

int main() {
    int a[10][10], n, i, j, flag = 1;

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

    // Check for symmetry
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    // Display the result
    if(flag)
        printf("The matrix is symmetric.");
    else
        printf("The matrix is not symmetric.");

    return 0;
}