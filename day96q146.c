#include <stdio.h>

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
    struct Date joiningDate; // Nested structure
};

int main() {
    struct Employee emp;

    // Input employee details
    printf("Enter employee name: ");
    scanf(" %[^\n]", emp.name);
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter salary: ");
    scanf("%f", &emp.salary);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    // Print employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Salary: %.2f\n", emp.salary);
    printf("Joining Date: %02d/%02d/%04d\n", 
           emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}
