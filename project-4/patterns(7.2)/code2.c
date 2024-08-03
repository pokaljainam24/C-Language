// Q.2
// Write a Program to print the below Left Half Pyramid pattern using nested for loop.
// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5

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
