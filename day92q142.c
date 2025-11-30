#include <stdio.h>

// Define structure for Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i;

    // Input details for 5 students
    for (i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Read string with spaces
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    // Print all student details
    printf("All Student Details:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}
