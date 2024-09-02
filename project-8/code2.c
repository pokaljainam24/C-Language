// Q.2 Cubes Generator
// Develop a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
// Example:
// Input:
// Enter array's size: 2
// Enter array elements:
// a[0][0] = 3
// a[0][1] = 2
// a[1][0] = 5
// a[1][1] = 4
// Output:
// Cubes of all elements:
// 9 4
// 25 64

#include <stdio.h>

void main()
{
    int a[2][2], i, j;
    printf("Enter array's size: ");
    scanf("%d", &i);
    printf("Enter array elements:\n");
    for (j = 0; j < i; j++)
    {
        for (int k = 0; k < i; k++)
        {
            printf("a[%d][%d] = ", j, k);
            scanf("%d", &a[j][k]);
        }
    }
    printf("Cubes of all elements:\n");
    for (j = 0; j < i; j++)
    {
        for (int k = 0; k < i; k++)
        {
            printf("%d ", a[j][k] * a[j][k] * a[j][k]);
        }
        printf("\n");
    }
}
