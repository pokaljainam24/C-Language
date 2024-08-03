// Q.4 Develop a program that prints the given Inverted Left half triangle pattern using a nested for
// loop.
// 1 0 1 0 1
//   1 0 1 0
//     1 0 1
//       1 0
//         1

#include <stdio.h>

int main()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }

        for (int j = 1; j < 6 - i; j++)
        {
            printf("%d ", j % 2);
        }

        printf("\n");
    }
}
