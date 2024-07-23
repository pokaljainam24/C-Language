// 1. Write a Program to find the minimum number from the given 3 numbers using nested if else. Also, draw a Flowchart in your book.

#include <stdio.h>

int main()
{
    int num1, num2, num3, min;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2)
    {
        if (num1 < num3)
        {
            min = num1;
        }
        else
        {
            min = num3;
        }
    }
    else
    {
        if (num2 < num3)
        {
            min = num2;
        }
        else
        {
            min = num3;
        }
    }
    printf("The minimum number is: %d\n", min);
}
