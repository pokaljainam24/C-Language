// 5. Count Even and Odd Numbers
// Question: Write a C program that counts the number of even and odd numbers in an array of 8
// integers using a for loop.

#include <stdio.h>

int main()
{
    int arr[8] = {2, 4, 6, 7, 11, 15, 8, 16};
    int even = 0, odd = 0;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
}
  