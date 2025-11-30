#include <stdio.h>

// Define enum for gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// Define struct for a person
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    // Array of strings for printing gender
    const char *genderNames[] = {"MALE", "FEMALE", "OTHER"};

    struct Person p;

    // Input person details
    printf("Enter name: ");
    scanf(" %[^\n]", p.name);
    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Select gender (0=MALE, 1=FEMALE, 2=OTHER): ");
    int choice;
    scanf("%d", &choice);
    p.gender = (enum Gender) choice;

    // Print person details
    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Gender: %s\n", genderNames[p.gender]);

    return 0;
}
