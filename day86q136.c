#include <stdio.h>

// Define enumeration for menu choices
enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum Menu choice;
    int a, b;

    // Display menu
    printf("Menu:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Perform operation based on choice
    switch (choice) {
        case ADD:
            printf("Result: %d\n", a + b);
            break;
        case SUBTRACT:
            printf("Result: %d\n", a - b);
            break;
        case MULTIPLY:
            printf("Result: %d\n", a * b);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
