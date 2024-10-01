#include <stdio.h>
#include <string.h>

// Define a structure for student information
struct Student {
    char name[50];
    int age;
};

int main() {
    // Create an array of structures
    struct Student students[3];

    // Input data for each student
    for (int i = 0; i < 3; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter age for student %d: ", i + 1);
        scanf("%d", &students[i].age);
    }

    // Print the information of each student
    printf("\nStudent Information:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d: Name: %s, Age: %d\n", i + 1, students[i].name, students[i].age);
    }

    return 0;
}