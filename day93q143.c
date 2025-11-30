#include <stdio.h>

// Define structure for Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    int n, i, maxIndex = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Read string with spaces
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Find student with highest marks
    for (i = 1; i < n; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }

    // Print the student with highest marks
    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", students[maxIndex].name);
    printf("Roll Number: %d\n", students[maxIndex].roll_no);
    printf("Marks: %.2f\n", students[maxIndex].marks);

    return 0;
}
