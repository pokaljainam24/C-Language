// 4. Initialize and Print an Array
// Question: Write a C program that initializes an array of 6 floating-point numbers and uses a for
// loop to print each number in the array.

#include <stdio.h>

int main()
{
    float array[6] = {3.14, 2.71, 1.41, 1.62, 0.57, 2.58};
    int i;
    for (i = 0; i < 6; i++)
    {
        // printf("%f\n", array[i]);
        printf("%.2f\n", array[5]);
        printf("----------------");
        printf("%.2f\n", array[4]);
        printf("----------------");
        printf("%.2f\n", array[3]);
        printf("----------------");
        printf("%.2f\n", array[2]);
        printf("----------------");
        printf("%.2f\n", array[1]);
    }
}