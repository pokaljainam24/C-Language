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

void main()
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
            result = num1 + num2;
            printf("Addition of %d and %d is %d\n", result);
        case 2:
            result = num1 - num2;
            printf("Subtraction of %d and %d is %d\n", result);
        case 3:
            result = num1 * num2;
            printf("Multiplication of %d and %d is %d\n", result);
        case 4:
            result = num1 / num2;
            printf("Division of %d and %d is %d\n", result);
        case 5:
            result = num1 % num2;
            printf("Modulus of %d and %d is %d\n", result);
        default:
            printf("Invalid choice\n");
        }

        printf("\n");
    }
}


