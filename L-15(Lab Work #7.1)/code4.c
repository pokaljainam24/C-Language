// Q.4
// Write a Program to print the below Inverted Right Half Pyramid pattern using nested
// for loop.
// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5

#include <stdio.h>
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}