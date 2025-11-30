#include <stdio.h>

int main() {
    int n, target, i, j;
    int found = 0;

    // Input size of array
    scanf("%d", &n);

    int nums[n];

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Input target value
    scanf("%d", &target);

    // Find two indices
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d", i, j);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    // If no solution exists
    if (!found)
        printf("-1 -1");

    return 0;
}
