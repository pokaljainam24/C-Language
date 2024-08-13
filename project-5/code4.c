// Q.4 Sum of Elements in Row & Column of 2D Array
// Develop a Program to print and find the sum of all elements of a given row & column from a 2D
// array.
// Example:
// Input:
// Enter the array's row size: 3
// Enter the array's column size: 3
// Enter array's elements:
// a[0][0] = 2
// a[0][1] = 7
// a[0][2] = 1
// a[1][0] = 3
// a[1][1] = 5
// a[1][2] = 4
// a[2][0] = 8
// a[2][1] = 9
// a[2][2] = 6

// Output:
// Enter row number: 0
// Elements of row 0: 2, 7, 1
// The sum of a row 0: 10
// Enter column number: 2
// Elements of column 2: 1, 4, 6
// The sum of column 2: 11

#include <stdio.h>

int main()
{
    int a[3][3], i, j, row, col, sum = 0;
    printf("Enter the array's row size: ");
    scanf("%d", &row);
    printf("Enter the array's column size: ");
    scanf("%d", &col);
    printf("Enter array's elements:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter row number: ");
    scanf("%d", &row);
    printf("Elements of row %d: ", row);
    for (j = 0; j < col; j++)
    {
        printf("%d, ", a[row][j]);
    }
    printf("\nThe sum of a row %d: %d\n", row, sumElement(a[row], col));
    printf("Enter column number: ");
    scanf("%d", &col);
    printf("Elements of column %d: ", col);
    for (i = 0; i < row; i++)
    {
        printf("%d, ", a[i][col]);
    }
    printf("\nThe sum of column %d: %d\n", col, sumElements(a, row, col));
}