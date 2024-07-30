// Q-1 Write a Program to print the sum of all numbers from 1 to N using a for loop.
// For example,
// Input:
// Enter any number: 8
// Output:
// The sum of all numbers: 36

#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The sum of all numbers: %d", sum);
}