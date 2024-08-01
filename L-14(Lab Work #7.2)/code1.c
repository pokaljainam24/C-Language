// Q.1
// Write a Program to print the below Left Half Pyramid pattern using nested for loop.
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
#include <stdio.h>

int main() {
    int n = 5; 

    for (int i = 1; i <= n; i++) {
        
        for (int space = 1; space <= n - i; space++) {
            printf("  ");
        }

        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }
}


