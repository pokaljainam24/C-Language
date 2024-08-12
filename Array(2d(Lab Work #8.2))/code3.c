// Q.3
// Write a Program to find the sum of diagonal elements from a given 2D array.
// For example,
// Input:
// Enter the array's row & column size: 3
// Enter array's elements:
// a[0][0] = 2
// a[0][1] = 4
// a[0][2] = 1
// a[1][0] = 3
// a[1][1] = 5
// a[1][2] = 4
// a[2][0] = 8
// a[2][1] = 2
// a[2][2] = 6
// Output:
// The sum of diagonal elements of an Array: 13

#include <stdio.h>

int main()
{
    int size;
    printf("Enter the array's row & column size: ");
    scanf("%d:-", &size);

    int sum = 0;
    int a[3][3];

    printf("Enter array's elements:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        sum += a[i][i];
    }

    printf("The sum of diagonal elements of the array: %d\n", sum);
}