#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceName[100], destName[100];
    char ch;

    // Take filenames from the user
    printf("Enter source file name: ");
    scanf("%s", sourceName);
    printf("Enter destination file name: ");
    scanf("%s", destName);

    // Open source file in read mode
    sourceFile = fopen(sourceName, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file!\n");
        return 1;
    }

    // Open destination file in write mode
    destFile = fopen(destName, "w");
    if (destFile == NULL) {
        printf("Error: Could not open destination file!\n");
        fclose(sourceFile);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    // Close files
    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully from '%s' to '%s'\n", sourceName, destName);

    return 0;
}
