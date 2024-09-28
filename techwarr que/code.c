#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 6, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count[100] = {0}; // Adjust size based on expected input range

    printf("Repeated numbers: ");
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;  // Increment the count for the current number
        if (count[arr[i]] == 2) {
            printf("%d ", arr[i]); // Print only when count is 2
        }
    }
    printf("\n");

    return 0;
}
