#include <stdio.h>

int main() {
    int arr[100], n, i, j = 0, temp;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Move non-zero elements to the beginning
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }
    }

    // Display the modified array
    printf("Array after moving zeroes to the end:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}