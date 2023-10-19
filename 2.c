#include <stdio.h>

int a, b, c, d, e;

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

    a = arr[0];
    b = arr[1];
    c = arr[2];
    d = arr[3];
    e = arr[4];
}

int main() {
    a = 12;
    b = 9;
    c = 14;
    d = 5;
    e = 1;

    bubble_sort();

    printf("Sorted Values: %d, %d, %d, %d, %d\n", a, b, c, d, e);

    return 0;
}

