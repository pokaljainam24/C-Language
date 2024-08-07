// 3. Reverse an Array
// Question: Write a C program that reverses the elements of an integer array of size 4 using a for
// loop and prints the reversed array.

#include <stdio.h>

int main()
{
    int arr[4] = {1, 2, 3, 4};
    int i, n = 4;
    for (i = 0; i < 4; i++)
    {
        printf("%d ", arr[n - i - 1]);
    }
}