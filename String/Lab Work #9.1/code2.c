// Q.2
// Write a Program to convert the given string in lowercase without using any string
// function.
// For example,
// Input:
// Enter any string: HELLO WORLD
// Output:
// Lowercase string: hello world

#include <stdio.h>

int main()
{
    char str[100], lower[100];
    int i;
    printf("Enter any string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            lower[i] = str[i] + 32;
            printf("%c", lower[i]);
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    
    return 0;
}