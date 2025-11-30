#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int lastIndex[256];
    int i, start = 0, maxLen = 0;

    // Input string
    scanf("%s", s);

    // Initialize lastIndex array with -1
    for (i = 0; i < 256; i++)
        lastIndex[i] = -1;

    // Sliding window
    for (i = 0; s[i] != '\0'; i++) {
        if (lastIndex[(unsigned char)s[i]] >= start) {
            start = lastIndex[(unsigned char)s[i]] + 1;
        }

        lastIndex[(unsigned char)s[i]] = i;

        if (i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    // Print result
    printf("%d", maxLen);

    return 0;
}
