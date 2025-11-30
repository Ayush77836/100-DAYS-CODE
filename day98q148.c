#include <stdio.h>
#include <string.h>

// Define structure for Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to check if two students are identical
int areIdentical(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) == 0 &&  // Compare names
        s1.roll_no == s2.roll_no &&       // Compare roll numbers
        s1.marks == s2.marks) {           // Compare marks
        return 1; // Identical
    }
    return 0; // Not identical
}

int main() {
    struct Student s1, s2;

    // Input first student
    printf("Enter details of first student:\n");
    printf("Name: ");
    scanf(" %[^\n]", s1.name);
    printf("Roll Number: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    // Input second student
    printf("\nEnter details of second student:\n");
    printf("Name: ");
    scanf(" %[^\n]", s2.name);
    printf("Roll Number: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    // Check if identical
    if (areIdentical(s1, s2)) {
        printf("\nThe two students are identical.\n");
    } else {
        printf("\nThe two students are NOT identical.\n");
    }

    return 0;
}
