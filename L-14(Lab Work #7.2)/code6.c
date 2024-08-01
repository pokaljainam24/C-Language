// Q.6
// Write a Program to print the below Inverted Left Half Pyramid pattern using nested for
// loop.
// 5 4 3 2 1
//   5 4 3 2
//     5 4 3
//       5 4
//         5


#include <stdio.h>

int main() {
    int n = 5; 

    for (int i = 0; i < n; i++) {
       
        for (int space = 0; space < i; space++) {
            printf("  "); 
        }

        for (int j = n; j > i; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }
}

