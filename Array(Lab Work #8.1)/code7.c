// 4. Find the Maximum Value
// Question: Write a C program that finds and prints the maximum value in an array of 7 integers
// using a for loop.

#include <stdio.h>

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int max = arr[0];
    for (int i = 1; i < 7; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else
        {
            continue;
        }
    }

    printf("%d", max);
}