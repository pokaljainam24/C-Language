// Q.5
// Write a Program to print the below Inverted Left Half Pyramid pattern using nested for
// loop.
// 5 4 3 2 1
//   4 3 2 1
//     3 2 1
//       2 1
//         1

#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < i; space++)
        {
            printf("  ");
        }

        for (int j = n - i; j >= 1; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
}
