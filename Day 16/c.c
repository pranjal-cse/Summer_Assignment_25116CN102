#include <stdio.h>

int main() {
    int arr[100], n, i, j, sum, found = 0;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the required sum
    printf("Enter the required sum: ");
    scanf("%d", &sum);

    // Find the pair
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    // If no pair is found
    if(found == 0) {
        printf("No pair found.");
    }

    return 0;
}