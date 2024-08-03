// Q.7 Develop a program that prints the given Custom alphabetic pattern using a nested for loop.
// * * * * *
// *       *
// * * * * *
// *
// *

// #include <stdio.h>

// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (i == 0 || i == 2 || i == 1)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>

int main()
{
    int rows = 5;

    for (int i = 0; i < rows; i++)
    {
        if (i == 0 || i == 2)
        {
            for (int j = 0; j < rows; j++)
            {
                printf("* ");
            }
        }
        else if (i == 1)
        {
            printf("* ");
            for (int j = 1; j < rows - 1; j++)
            {
                printf("  ");
            }
            printf("*");
        }
        else
        {
            printf("*");
        }
        printf("\n");
    }
}
