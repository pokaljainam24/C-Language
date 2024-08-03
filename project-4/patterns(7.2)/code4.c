// Q.4
// Write a Program to print the below Inverted Left Half Pyramid pattern using nested for
// loop.
// 1 0 1 0 1
//   0 1 0 1
//     1 0 1
//       0 1
//         1


#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        
        for (int space = 0; space < i; space++) {
            printf("  ");
        }
        for (int j = 0; j < n - i; j++) {
            printf("%d ", (j+i)%2);
        }

        printf("\n");
    }
}
