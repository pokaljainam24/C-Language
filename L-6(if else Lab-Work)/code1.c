// 1. Write a Program to find the minimum number from the given 2 numbers using if else.

#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    if (a < b)
    {
        printf("The minimum number is %d", a);
    }
    else
    {
        printf("The minimum number is %d", b);
    }
}