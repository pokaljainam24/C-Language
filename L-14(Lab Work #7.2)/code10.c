// Q.10
//  Write a Program to print the below Full Pyramid pattern using nested for loop.
//     1
//    121
//   12321
//  1234321
// 123454321

// #include <stdio.h>
// int main()
// {
//     int i, j, n = 5;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             if (j == 1 || j == i || i == n || j == n)
//             {
//                 printf("%d", j);
//             }
//             else
//             {
//                 printf("%d",j);
//             }
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("  ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
}
