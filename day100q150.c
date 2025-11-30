#include <stdio.h>
#include <string.h>

// Define structure for Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    struct Student *ptr;

    // Pointer points to the structure
    ptr = &s;

    // Modify data using pointer and -> operator
    printf("Enter student name: ");
    scanf(" %[^\n]", ptr->name);
    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);
    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Display data using pointer
    printf("\nStudent Details (using pointer):\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll_no);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
