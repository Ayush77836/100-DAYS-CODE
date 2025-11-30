#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ceilIndex = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            ceilIndex = mid;     // possible ceil found
            high = mid - 1;      // move left for first occurrence
        } else {
            low = mid + 1;
        }
    }
    return ceilIndex;
}

int main() {
    int n, x;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of x: ");
    scanf("%d", &x);

    int result = findCeil(arr, n, x);

    printf("Ceil index: %d\n", result);

    return 0;
}
