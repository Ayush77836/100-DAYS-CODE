#include <stdio.h>

int main() {
    int n, i;

    // Input size of array
    scanf("%d", &n);

    int nums[n], prefix[n], suffix[n], answer[n];

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Compute prefix product array
    prefix[0] = 1;
    for (i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // Compute suffix product array
    suffix[n - 1] = 1;
    for (i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    // Compute answer array
    for (i = 0; i < n; i++) {
        answer[i] = prefix[i] * suffix[i];
    }

    // Print answer array
    for (i = 0; i < n; i++) {
        if (i < n - 1)
            printf("%d ", answer[i]);
        else
            printf("%d", answer[i]);
    }

    return 0;
}
