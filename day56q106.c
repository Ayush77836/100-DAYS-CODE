#include <stdio.h>

int main() {
    int n, i, j;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find Next Greater Element for each element
    for (i = 0; i < n; i++) {
        int nextGreater = -1;

        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }

        // Print result in comma separated format
        if (i < n - 1)
            printf("%d, ", nextGreater);
        else
            printf("%d", nextGreater);
    }

    return 0;
}
