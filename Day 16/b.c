#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    int maxFreq = 0, maxElement, count;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the element with maximum frequency
    for(i = 0; i < n; i++) {
        count = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    // Display the result
    printf("Element with maximum frequency = %d\n", maxElement);
    printf("Frequency = %d\n", maxFreq);

    return 0;
}