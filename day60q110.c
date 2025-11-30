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

    // Input window size k
    scanf("%d", &k);

    // Edge case
    if (k > n || k <= 0) {
        printf("Invalid value of k");
        return 0;
    }

    // Find max for each subarray of size k
    for (i = 0; i <= n - k; i++) {
        int max = arr[i];

        for (j = i; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }

        // Print results
        printf("%d", max);
        if (i < n - k)
            printf(" ");
    }

    return 0;
}
