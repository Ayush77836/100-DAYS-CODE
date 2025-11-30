#include <stdio.h>

// Define enumeration for user roles
enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    // Array of strings for enum names
    const char *roleNames[] = {"ADMIN", "USER", "GUEST"};

    // Loop through enum values and print name and integer value
    for (int i = ADMIN; i <= GUEST; i++) {
        printf("%s = %d\n", roleNames[i], i);
    }

    return 0;
}
