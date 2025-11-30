#include <stdio.h>
#include <stdlib.h>

// Define structure for Date
struct Date {
    int day;
    int month;
    int year;
};

// Define structure for Employee
struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joiningDate;
};

int main() {
    FILE *fp;
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Joining date (dd mm yyyy): ");
        scanf("%d %d %d", &employees[i].joiningDate.day,
                          &employees[i].joiningDate.month,
                          &employees[i].joiningDate.year);
    }

    // Write employee data to binary file
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }
    fwrite(employees, sizeof(struct Employee), n, fp);
    fclose(fp);
    printf("\nEmployee data saved to employees.dat\n");

    // Read employee data from binary file
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        exit(1);
    }

    struct Employee emp;
    printf("\nReading employee data from file:\n");
    for (int i = 0; i < n; i++) {
        fread(&emp, sizeof(struct Employee), 1, fp);
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", emp.name);
        printf("ID: %d\n", emp.id);
        printf("Salary: %.2f\n", emp.salary);
        printf("Joining Date: %02d/%02d/%04d\n",
               emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);
    }

    fclose(fp);
    return 0;
}
