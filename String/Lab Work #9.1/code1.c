// Q.1
// Write a Program to convert the given string in uppercase without using any string
// function.
// For example,
// Input:
// Enter any string: hello world
// Output:
// Uppercase string: HELLO WORLD

// #include <stdio.h>

// int main()
// {
//     char str[100], upper[100];
//     int i = 0, j = 0;
//     printf("Enter any string: ");
//     gets(str);
//     while (str[i] != '\0')
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             upper[j] = str[i] - 32;
//             j++;
//         }
//         else
//         {
//             upper[j] = str[i];
//             j++;
//         }
//         i++;
//     }
//     upper[j] = '\0';
//     printf("Uppercase string: %s", upper);
// }

// using for loop

#include <stdio.h>
int main()
{
    char str[100], upper[100];
    int i = 0, j = 0;
    printf("Enter any string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            upper[j] = str[i] - 32;
            j++;
        }
        else
        {
            upper[j] = str[i];
            j++;
        }
    }
    upper[j] = '\0';
    printf("Uppercase string: %s", upper);
}
