// Q.3 Digit Addition
// Develop a Program to find the sum of a number's first and last digits.
// Example:
// Input: Enter any number: 384
// Output: The sum of the first and the last digit: 7

#include <stdio.h>

int main()
{
    int num, first_digit, last_digit, sum;
    printf("Enter any number: ");
    scanf("%d", &num);
    first_digit = num / 1000;
    last_digit = num % 10;
    sum = first_digit + last_digit;
    printf("The sum of the first and the last digit: %d", sum);
}