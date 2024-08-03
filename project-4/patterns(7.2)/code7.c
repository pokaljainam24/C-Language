// Q.7
// Write a Program to print the below pattern using nested for loop.
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3         3 2 1
// 1 2             2 1
// 1                 1

// #include <stdio.h>

// int main()
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", j);   
//         }
//         for (int k = i - 1; k >= 1; k--)
//         {
//             printf("%d ", k);   
//         }
//         printf("\n");
        
//     }
// }

// #include <stdio.h>

// int main()
// {
//     int n = 5;

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 1; j <= n - i; j++)
//         {
//             printf("%d ", j);
//         }

//         for (int k = 0; k < 2 * i - 1; k++)
//         {
//             printf("  ");
//         }

//         for (int j = n - i; j >= 1; j--)
//         {
//             if (j != n)
//             {
//                 printf("%d ", j);
//             }
//         }

//         printf("\n");
//     }
// }


#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("%d ", j);
        }

        for (int k = 0; k < 2 * i - 1; k++)
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
