//  Q.8
//  WriteaProgramtoprintthebelowHallowDiamondlookalikepatternusingnested
//  forloop.
//  1234554321
//  1234  4321
//  123    321
//  12      21
//  1        1
//  1        1
//  12      21
//  123    321
//  1234  4321
//  1234554321

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
            if (j != n)
            {
                printf("%d ", j);
            }
        }

        printf("\n");
    }
    for (int i = n - 2; i >= 0; i--)
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
            if (j != n)
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}