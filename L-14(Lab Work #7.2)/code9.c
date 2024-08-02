//  Q.9
//  WriteaProgramtoprintthebelowpatternusingnestedforloop.
//  12345
//  1234
//  123
//  12
//  1
//  12
//  123
//  1234
//  12345

// #include <stdio.h>
// int main()
// {
//     int i, j, n = 5;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
// }

// type-2 revers

#include <stdio.h>

int main() {
    int n = 5;

    // Print the 1st half of the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Print the 2nd half of the pattern
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= i + 1; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}
