// Q.3 Develop a program that prints the given Left half triangle pattern using a nested for loop.
//         5
//       4 5
//     3 4 5
//   2 3 4 5
// 1 2 3 4 5

#include <stdio.h>

int main()
{
    int n = 5;
    int a;

    for (int i = 0; i < n; i++)
    {
        a = 5 - i;

        for (int j = n; j > i + 1; j--)
        {
            printf("  ");
        }

        for (int j = a; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
