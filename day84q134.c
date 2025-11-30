#include <stdio.h>

// Define enumeration for status codes
enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status code;

    // Example: loop through all status codes
    for (code = SUCCESS; code <= TIMEOUT; code++) {
        switch (code) {
            case SUCCESS:
                printf("SUCCESS -> Operation completed successfully.\n");
                break;
            case FAILURE:
                printf("FAILURE -> Operation failed.\n");
                break;
            case TIMEOUT:
                printf("TIMEOUT -> Operation timed out.\n");
                break;
            default:
                printf("Unknown status.\n");
        }
    }

    return 0;
}
