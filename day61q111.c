#include <stdio.h>

int main() {
    int n, k, i, j;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input window size
    scanf("%d", &k);

    // Edge case
    if (k > n || k <= 0) {
        printf("Invalid value of k");
        return 0;
    }

    // Process each subarray of size k
    for (i = 0; i <= n - k; i++) {
        int found = 0;

        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }

        // If no negative number found
        if (!found)
            printf("0");

        // Space between outputs
        if (i < n - k)
            printf(" ");
    }

    return 0;
}
