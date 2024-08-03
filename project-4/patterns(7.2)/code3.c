// Q.3
// Write a Program to print the below Left Half Pyramid pattern using nested for loop.
// 5
// 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1

// #include <stdio.h>

// void main()
// {
//     for (int i = 5; i >= 1; i--)
//     {
//         for (int j = 1; j <= 5 - i + 1; j++)
//         {
//             printf("%d ", i);
//         }
//         printf("\n");
//     }
// }

// type-2

// #include <stdio.h>

// int main()
// {
//     int n = 5; // Number of lines

//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = n; j >= i; j--)
//         {
//             printf(" %d", i);
//         }
//         printf("\n");
//     }
// }

// type-3

#include <stdio.h>

int main()
{
    int n = 5; 

    for (int i = n; i >= 1; i--)
    {
        
        for (int k = 1; k < i; k++)
        {
            printf("  ");
        }
      
        for (int j = i; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
