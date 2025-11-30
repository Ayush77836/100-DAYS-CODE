#include <stdio.h>

// Define enumeration for days
enum Days {
    SUNDAY,    // 0
    MONDAY,    // 1
    TUESDAY,   // 2
    WEDNESDAY, // 3
    THURSDAY,  // 4
    FRIDAY,    // 5
    SATURDAY   // 6
};

int main() {
    // Array of strings to represent day names
    const char *dayNames[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    // Loop through enum values and print day with its integer
    for (int i = SUNDAY; i <= SATURDAY; i++) {
        printf("%s = %d\n", dayNames[i], i);
    }

    return 0;
}
