// Q.2 Digit Counter
// Develop a Program to count the total number of digits in a number.
// Example:
// Input: Enter any number: 752
// Output: Total number of digits: 3

#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("Total number of digits: %d", count);
}