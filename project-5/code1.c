// Q.1 Negative Elements in 1D Array
// Develop a program that finds all the negative elements from a given 1D array.
// Example:
// Input:
// Enter the array's size: 5
// Enter array's elements:
// a[0] = 2
// a[1] = -4
// a[2] = 1
// a[3] = -3
// a[4] = -5
// Output:
// Negative elements from an Array: -4, -3, -5

#include <stdio.h>

int main()
{
    int n, i, a[5], count = 0;
    printf("Enter the array's size: ");
    scanf("%d", &n);
    printf("Enter array's elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        if (a[i] < 0)
        {
            count++;
        }
    }
    printf("Negative elements from an Array: ");
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            printf("%d, ", a[i]);
        }
    }
}