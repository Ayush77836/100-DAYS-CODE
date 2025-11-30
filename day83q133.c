#include <stdio.h>

// Define enumeration for months
enum Months {
    JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main() {
    // Array storing number of days in each month (non-leap year)
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 
                         31, 31, 30, 31, 30, 31};

    // Array of month names for printing
    const char *monthNames[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    // Loop through all months and print days
    for (int month = JANUARY; month <= DECEMBER; month++) {
        printf("%s has %d days.\n", monthNames[month], daysInMonth[month]);
    }

    return 0;
}
