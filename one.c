#include <stdio.h>

int main() {
    // Define an array of integers
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Declare a pointer to the array
    int *ptr = numbers;

    // Print the array using the pointer
    printf("Array elements using pointer:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    // Modify array elements using the pointer
    for (int i = 0; i < size; i++) {
        *(ptr + i) += 5; // Increment each element by 5
    }

    // Print the modified array
    printf("\nModified array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    return 0;
}
