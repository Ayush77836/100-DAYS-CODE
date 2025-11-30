#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    // Input size n
    scanf("%d", &n);

    int arr[n];

    // Input array elements (size n, values between 0 to n)
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Expected sum from 0 to n
    int expectedSum = n * (n + 1) / 2;

    // Missing number
    int missing = expectedSum - sum;

    // Print missing number
    printf("%d", missing);

    return 0;
}

