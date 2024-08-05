// Q.2
// Write a Program to find the average of a 1D array.
// For example,
// Input:
// Enter array size: 5
// Enter array elements:
// a[0] = 12
// a[1] = 42
// a[2] = 18
// a[3] = 50
// a[4] = 26
// Output:
// Average of an Array: 29.6

#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    float avg;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    avg = (float)sum / n;
    printf("Average of an Array: %.1f\n", avg);
}