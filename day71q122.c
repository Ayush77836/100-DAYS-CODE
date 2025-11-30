#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int age;

    // Open file in write mode
    file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Take user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Use fgets to read full name including spaces

    // Remove newline character from fgets if present
    size_t len = 0;
    while (name[len] != '\0') len++;
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write data to file
    fprintf(file, "Name: %s\nAge: %d\n", name, age);

    // Close file
    fclose(file);

    printf("Data successfully saved to info.txt\n");

    return 0;
}
