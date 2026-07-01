#include <stdio.h>

int main() {
    int arr1[100], arr2[100], arr3[200];
    int n1, n2, i, j;

    // Input the size of the first array
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);

    // Input elements of the first array
    printf("Enter %d elements of first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input the size of the second array
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);

    // Input elements of the second array
    printf("Enter %d elements of second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Copy first array into the merged array
    for(i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }

    // Copy second array into the merged array
    for(j = 0; j < n2; j++) {
        arr3[i + j] = arr2[j];
    }

    // Display the merged array
    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}