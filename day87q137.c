#include <stdio.h>

// Define enumeration for user roles
enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum UserRole role;
    int choice;

    // Display menu for role selection
    printf("Select user role:\n");
    printf("0. ADMIN\n");
    printf("1. USER\n");
    printf("2. GUEST\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Assign enum value based on input
    role = (enum UserRole) choice;

    // Display message based on role
    switch (role) {
        case ADMIN:
            printf("Welcome ADMIN! You have full access.\n");
            break;
        case USER:
            printf("Welcome USER! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome GUEST! You have view-only access.\n");
            break;
        default:
            printf("Invalid role selected.\n");
    }

    return 0;
}
