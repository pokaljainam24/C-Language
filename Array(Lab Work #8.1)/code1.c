// Q.1
// Write a Program to find the length of a 1D array.
// For example,
// Input:
// Enter array size: 5
// Enter array elements:
// a[0] = 3
// a[1] = 7
// a[2] = 1
// a[3] = 8
// a[4] = 6
// Output:Length of an Array: 5

#include <stdio.h>

int main()
{
    int n, i, a[5];
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array elements:");
    scanf("%d", &a);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Length of an Array: %d\n", n);
}
