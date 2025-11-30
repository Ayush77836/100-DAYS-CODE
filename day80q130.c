#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);  // read string with spaces
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Write to file
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Unable to open file.\n");
        exit(1);
    }

    for (i = 0; i < n; i++) {
        fprintf(fp, "%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    fclose(fp);

    printf("\nStudent records saved successfully!\n\n");

    // Read from file
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Unable to open file.\n");
        exit(1);
    }

    printf("Reading student records from file:\n");
    struct Student temp;
    while (fscanf(fp, " %49s %d %f", temp.name, &temp.roll, &temp.marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", temp.name, temp.roll, temp.marks);
    }

    fclose(fp);

    return 0;
}
