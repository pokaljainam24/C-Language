// Q.3 Transpose of 2D Array
// Develop a Program to find the transpose matrix of a given 2D array.
// Example:
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
// The transpose matrix of an array:
// 2 3 8
// 4 5 2
// 1 4 6

#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], i, j;
    printf("Enter the array's row & column size: ");
    scanf("%d", &i);
    printf("Enter array's elements:\n");
    for (int k = 0; k < i; k++)
    {
        for (int l = 0; l < i; l++)
        {
            printf("a[%d][%d] = ", k, l);
            scanf("%d", &a[k][l]);
        }
    }
    printf("\nThe transpose matrix of an array:\n");
    for (int k = 0; k < i; k++)
    {
        for (int l = 0; l < i; l++)
        {
            b[l][k] = a[k][l];
            printf("%d ", b[l][k]);
        }
        printf("\n");
    }
}