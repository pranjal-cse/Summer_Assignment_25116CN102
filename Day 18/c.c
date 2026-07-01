#include <stdio.h>

int main() {
    int arr[100], n, i, key;
    int low, high, mid, found = 0;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input sorted array elements
    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Binary Search
    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            found = 1;
            break;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    // Display result
    if(found)
        printf("Element found at position %d", mid + 1);
    else
        printf("Element not found");

    return 0;
}