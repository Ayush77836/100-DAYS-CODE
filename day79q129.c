#include <stdio.h>

int main() {
    FILE *file;
    int num, sum = 0, count = 0;
    float average;

    // Open the file in read mode
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    // Read integers from the file
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    // Close the file
    fclose(file);

    // Check if there were numbers
    if (count == 0) {
        printf("No integers found in the file.\n");
        return 0;
    }

    // Compute average
    average = (float)sum / count;

    printf("Sum of integers: %d\n", sum);
    printf("Average of integers: %.2f\n", average);

    return 0;
}
