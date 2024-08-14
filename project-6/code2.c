// Q.2 Frequency Counter
// Extend the program to count the frequency of each character in a given string.
// Example:
// Input: Enter any string: development
// Output:
// Frequency of each letter:
// d => 1
// e => 2
// v => 1
// e => 3
// l => 1
// o => 1
// p => 1
// m => 1
// e => 3
// n => 1
// t => 1

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, count = 0, max = 0, max_index = 0;
    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; // remove the newline character
    for (i = 0; i < strlen(str); i++)
    {
        count = 0;
        for (j = 0; j < strlen(str); j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
            max_index = i;
        }
    }
    printf("Frequency of each letter:\n");
    for (i = 0; i < strlen(str); i++)
    {
        count = 0;
        for (j = 0; j < strlen(str); j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        printf("%c => %d\n", str[i], count);
    }
    return 0;
}
