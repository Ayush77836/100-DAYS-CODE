#include <stdio.h>

int main() {
    FILE *file;
    char text[200];

    // Open file in append mode
    file = fopen("info.txt", "a");
    if (file == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Take input from user
    printf("Enter a line of text to append: ");
    getchar(); // To consume leftover newline from previous input
    fgets(text, sizeof(text), stdin);

    // Append the text to the file
    fprintf(file, "%s", text);

    // Close the file
    fclose(file);

    printf("Text successfully appended to info.txt\n");

    return 0;
}
