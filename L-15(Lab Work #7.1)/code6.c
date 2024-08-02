// Q.6
// Write a Program to print the below Inverted Right Half Pyramid pattern using nested
// for loop.
// 1 0 1 0 1
// 1 0 1 0
// 1 0 1
// 1 0
// 1

#include <stdio.h>

int main()
{
    int i, j, n = 5; 

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 1)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
