#include <stdio.h>

// Function to find first occurrence
int firstOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums[mid] == target) {
            result = mid;
            high = mid - 1;   // search left side
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return result;
}

// Function to find last occurrence
int lastOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums[mid] == target) {
            result = mid;
            low = mid + 1;   // search right side
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return result;
}

int main() {
    int n, target;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target element: ");
    scanf("%d", &target);

    int first = firstOccurrence(nums, n, target);
    int last = lastOccurrence(nums, n, target);

    if (first == -1)
        printf("Target not found: -1 -1\n");
    else {
        printf("First occurrence at index: %d\n", first);
        printf("Last occurrence at index: %d\n", last);
    }

    return 0;
}
