#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i;

    // Input string (including spaces)
    fgets(str, sizeof(str), stdin);

    // Convert first character to uppercase (if alphabet)
    if (isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    // Convert remaining characters to lowercase
    for (i = 1; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[i] = tolower(str[i]);
        }
    }

    // Print sentence case string
    printf("%s", str);

    return 0;
}
