#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a, b, c, d, e; // These are global variables

void bubble_sort() {
    int arr[] = {a, b, c, d, e};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Copy the sorted values back to the global variables
    a = arr[0];
    b = arr[1];
    c = arr[2];
    d = arr[3];
    e = arr[4];
}

int main() {
    srand((unsigned)time(NULL)); // Seed the random number generator with the current time

    // Generate random values for a, b, c, d, and e
    a = rand() % 100;
    b = rand() % 100;
    c = rand() % 100;
    d = rand() % 100;
    e = rand() % 100;

    bubble_sort();

    // Now, a, b, c, d, and e are sorted
    printf("Sorted Values: %d, %d, %d, %d, %d\n", a, b, c, d, e);

    return 0;
}

