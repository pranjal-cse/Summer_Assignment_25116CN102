#include <stdio.h>

int main() {
    int arr[100], n, i, element, count = 0;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element whose frequency is to be found
    printf("Enter the element to find frequency: ");
    scanf("%d", &element);

    // Count the frequency
    for(i = 0; i < n; i++) {
        if(arr[i] == element) {
            count++;
        }
    }

    // Display the result
    printf("Frequency of %d = %d", element, count);

    return 0;
}