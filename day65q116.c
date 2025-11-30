#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    int freq[26] = {0};
    int i;

    // Input strings
    scanf("%s %s", s, t);

    // If lengths are not equal, not anagrams
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }

    // Count frequency of characters
    for (i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    // Check if all frequencies are zero
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    // If all checks passed
    printf("Anagram");

    return 0;
}
