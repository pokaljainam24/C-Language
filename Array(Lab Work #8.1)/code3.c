// Q.3
// Write a Program to perform the addition operation of two 1D arrays & store it in
// another array. Keep in mind that both array sizes must be the same.
// For example,
// Input:
// Enter array size: 5
// Enter array A's elements:
// a[0] = 7
// a[1] = 4
// a[2] = 9
// a[3] = 5
// a[4] = 2
// Enter array B's elements:
// b[0] = 1
// b[1] = 3
// b[2] = 1
// b[3] = 7
// b[4] = 3
// Output:
// Array C is: 8, 7, 10, 12, 5

#include <stdio.h>

int main()
{
    int n, i, a[100], b[100], c[100];
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array A's elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter array B's elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }
    printf("Array C is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", c[i]);   
    }
}