// Q.5
// Write a Program to print the below Inverted Right Half Pyramid pattern using nested
// for loop.
// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4
// 5

#include <stdio.h>
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}