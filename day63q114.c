#include <stdio.h>

int main() {
    int n, k, i, j, temp;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input k
    scanf("%d", &k);

    // Check validity of k
    if (k <= 0 || k > n) {
        printf("Invalid value of k");
        return 0;
    }

    // Sort the array (ascending order)
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print kth smallest element
    printf("%d", arr[k - 1]);

    return 0;
}
