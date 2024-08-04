// Q.1 Develop a program that prints the given Right half triangle pattern using a nested for loop.
// 41
// 41 42
// 41 42 43
// 41 42 43 44
// 41 42 43 44 45

#include <stdio.h>

int main()
{
    int n = 5, i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ",41 + j);
        }
        printf("\n");
    }
}   