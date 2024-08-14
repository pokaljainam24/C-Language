// Q.1 Pelindrome Checker
// Develop a program that checks whether a given string is a palindrome or not without using string
// functions.
// Example:
// Input: Enter any string: nayan
// Output: The given string is a Palindrome.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    int i, len, flag = 1;
    printf("Enter any string: ");
    gets(str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    for (i = 0; i < len; i++)
    {
        if (str[i] != rev[i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("The given string is a Palindrome.");
    }
    else
    {
        printf("The given string is not a Palindrome.");
    }
}
