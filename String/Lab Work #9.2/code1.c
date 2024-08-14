// Q.1
// Write a Program to check if a given password is strong or not by satisfying the below
// criteria:
// - Password must contain at least one letter, one digit & one special symbol.
// - Password must be at least 6 characters.
// For example,
// Input:
// Create your password: Admin@123
// Output:
// Your password is Strong.
// -----------------------------------------
// For example,
// Input:
// Create your password: hello#89
// Output:
// Your password is not Strong.

#include <stdio.h>
#include <string.h>

int main()
{
    char password[100];
    int i, flag = 0, flag1 = 0, flag2 = 0;
    printf("Create your password: ");
    gets(password);
    for (i = 0; password[i] != '\0'; i++)
    {
        if ((password[i] >= 'a' && password[i] <= 'z') || (password[i] >= 'A' && password[i] <= 'Z') || (password[i] >= '0' && password[i] <= '9') || (password[i] == '@' || (password[i] == '#') || (password[i] == '$') || password[i] == '%') || (password[i] == '&') || (password[i] == '!') || (password[i] == '?') || (password[i] == '*') || (password[i] == '/'))
        {
            flag = 1;
        }
        if (password[i] >= 'a' && password[i] <= 'z')
        {
            flag1 = 1;
        }
        if (password[i] >= '0' && password[i] <= '9')
        {
            flag2 = 1;
        }
        if (i >= 6 && flag == 1 && flag1 == 1 && flag2 == 1)
        {
            printf("Your password is Strong.\n");
        }
    }
    printf("Your password is not Strong.\n");
    return 0;
}