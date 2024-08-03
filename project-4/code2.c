// Q.2 Develop a program that prints the given Floyd’s triangle pattern using a nested for loop.
// 11
// 12 13
// 14 15 16
// 17 18 19 20

#include <stdio.h>

int main()
{
    int n = 4, i, j;
    int k = 11;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= i - 1; j++)
        {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
}