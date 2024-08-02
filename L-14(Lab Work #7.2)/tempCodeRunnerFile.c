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
            if (j != n - i)
            {
                printf("%d ", j);
            }
        }

        printf("\n");
    }
}