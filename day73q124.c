#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;  // Flag to check if we are inside a word

    // Open file in read mode
    file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;  // Count every character

        // Count lines
        if (ch == '\n') {
            lines++;
        }

        // Count words
        if (isspace(ch)) {
            if (inWord) {
                words++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }

    // If the last character was part of a word, count the last word
    if (inWord) {
        words++;
    }

    // Close the file
    fclose(file);

    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    return 0;
}
