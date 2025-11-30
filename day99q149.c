#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure for Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student *s;

    // Dynamically allocate memory for one Student
    s = (struct Student*) malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input student details
    printf("Enter student name: ");
    scanf(" %[^\n]", s->name);  // Use arrow operator for pointer
    printf("Enter roll number: ");
    scanf("%d", &s->roll_no);
    printf("Enter marks: ");
    scanf("%f", &s->marks);

    // Print student details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s->name);
    printf("Roll Number: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);

    // Free dynamically allocated memory
    free(s);

    return 0;
}
