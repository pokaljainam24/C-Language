// Q.3
// Write a Program to convert the given string in toggle case without using any string
// function.
// For example,
// Input:
// Enter any string: HelLo worLD
// Output:
// Toggle case string: hELlO WORld

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    printf("Enter any string: ");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    printf("Toggle case string: %s", str);
    return 0;
}