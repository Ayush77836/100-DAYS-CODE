#include <stdio.h>

// Define an enum with explicit values
enum Status {
    SUCCESS = 10,
    FAILURE = 20,
    TIMEOUT = 30
};

int main() {
    // Enum variables
    enum Status s1 = SUCCESS;
    enum Status s2 = FAILURE;
    enum Status s3 = TIMEOUT;

    // Print the enum values (stored as integers)
    printf("SUCCESS = %d\n", s1);
    printf("FAILURE = %d\n", s2);
    printf("TIMEOUT = %d\n", s3);

    return 0;
}
