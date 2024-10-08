// Q.1 Calculator
// Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
// using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
// is pressed.
// Example:
// Input/Output:
// Press 1 for +
// Press 2 for -
// Press 3 for *
// Press 4 for /
// Press 5 for %
// Press 0 for the exit
// Enter your choice: 1
// Enter the first number: 5
// Enter the second number: 3
// Addition of 5 and 3 is 8
// Press 1 for +
// Press 2 for -
// Press 3 for *
// Press 4 for /
// Press 5 for %
// Press 0 for the exit
// Enter your choice: 4
// Enter the first number: 10
// Enter the second number: 5
// Division of 10 and 5 is 2
// Press 1 for +
// Press 2 for -
// Press 3 for *
// Press 4 for /
// Press 5 for %
// Press 0 for the exit
// Enter your choice: 0

#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int modulus(int a, int b);

int main()
{
    int choice, num1, num2, result;
    char ch;

    while (1)
    {
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);

        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch (choice)
        {
        case 1:
            result = add(num1, num2);
            printf("Addition of %d and %d is %d\n", num1, num2, result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Subtraction of %d and %d is %d\n", num1, num2, result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Multiplication of %d and %d is %d\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0)
            {
                result = divide(num1, num2);
                printf("Division of %d and %d is %d\n", num1, num2, result);
            }
            else
            {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        case 5:
            if (num2 != 0)
            {
                result = modulus(num1, num2);
                printf("Modulus of %d and %d is %d\n", num1, num2, result);
            }
            else
            {
                printf("Error! Modulus by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }

        printf("\n");
    }
    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int modulus(int a, int b)
{
    return a % b;
}