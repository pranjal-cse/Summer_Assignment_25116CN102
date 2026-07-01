#include <stdio.h>

int main() {
    int arr[100], n, i, j, found;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are:\n");

    // Find duplicates
    for(i = 0; i < n; i++) {
        found = 0;

        // Check if the element has already appeared
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                found = 1;
                break;
            }
        }

        // Count occurrences of the current element
        if(found == 0) {
            for(j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    printf("%d ", arr[i]);
                    break;
                }
            }
        }
    }

    return 0;
}