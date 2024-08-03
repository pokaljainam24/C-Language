// Q.5 Develop a program that prints the given Full Pyramid pattern using a nested for loop.
//         5
//       4 5 4
//     3 4 5 4 3
//   3 3 4 5 4 3 2
// 1 2 3 4 5 4 3 2 1

#include <stdio.h>

int main()
{

    int a;

    for (int i = 0; i < 5; i++)
    {
        a = 5 - i;

        for (int j = 0; j < (5 - i - 1) * 2; j++)
        {
            printf(" ");
        }

        for (int j = a; j <= 5; j++)
        {
            printf("%d ", j);
        }

        for (int j = 5 - 1; j >= a; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
}
