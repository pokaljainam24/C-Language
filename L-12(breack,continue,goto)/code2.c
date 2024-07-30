// Q.2
// Write a Program to print the factorial of number N using a for loop.
// For example,
// Input:
// Enter any number: 5
// Output:
// The factorial is: 120

#include <stdio.h>
int main()
{
    int n, i, fact = 1;
    printf("Enter any number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("The factorial is: %d", fact);
}