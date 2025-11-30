#include <stdio.h>

// Define structure for Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to find and return the top student
struct Student getTopStudent(struct Student students[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }
    return students[maxIndex]; // Return the student with highest marks
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Get top student
    struct Student top = getTopStudent(students, n);

    // Print top student details
    printf("\nTop Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
