#include <stdio.h>

int main()
{
    int size = 5;
    int num = 1;
    for (int i = 1; i <= size; i++)
    {
        for (int j = size; j >= i; j--)
        {
            printf(" %d ", j);
        }
        for (int k = 0; k < i; k++)
        {
            printf("  ");
        }
        num = 1;
        printf("\n");
    }
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d ", j);
        }
        for (int k = 5; k > 0; k--)
        {
            printf("  ");
        }
        num = 1;
        printf("\n");
    }
}