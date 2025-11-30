#include <stdio.h>

int main() {
    int n, k, i;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input window size k
    scanf("%d", &k);

    // Edge case: if k > n
    if (k > n) {
        printf("Invalid value of k");
        return 0;
    }

    // Compute sum of first window
    int windowSum = 0;
    for (i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // Slide the window
    for (i = k; i < n; i++) {
        windowSum = windowSum + arr[i] - arr[i - k];

        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    // Print maximum sum
    printf("%d", maxSum);

    return 0;
}
