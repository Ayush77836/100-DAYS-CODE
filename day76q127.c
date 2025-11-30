#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;

    // Ask the user for the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try to open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: File '%s' does not exist or cannot be opened.\n", filename);
        return 1;
    }

    printf("Contents of '%s':\n", filename);

    // Read and display the file content
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);  // Display each character
    }

    // Close the file
    fclose(file);

    return 0;
}
