#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_NAME_LENGTH 50

// Function to perform binary search
int binary_search(char names[][MAX_NAME_LENGTH], int size, const char *target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int cmp = strcmp(names[mid], target);

        if (cmp == 0) {
            return mid; // Name found
        }
        if (cmp < 0) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Name not found
}

int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    int n, i;
    char target[MAX_NAME_LENGTH];

    // Input number of names
    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar(); // To consume the newline character

    // Input names
    printf("Enter names (sorted order):\n");
    for (i = 0; i < n; i++) {
        fgets(names[i], MAX_NAME_LENGTH, stdin);
        // Remove newline character fro
