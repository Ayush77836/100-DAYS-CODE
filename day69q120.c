#include <stdio.h>

int main() {
    int n, i;
    int result = 0;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Read array and XOR elements (single loop for array)
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        result ^= arr[i];
    }

    // XOR with numbers from 1 to n-1
    for (i = 1; i <= n - 1; i++) {
        result ^= i;
    }

    // Result is the repeated element
    printf("%d", result);

    return 0;
}
