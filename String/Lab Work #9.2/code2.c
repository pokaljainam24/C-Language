// Q.2
// Write a Program to create a login mechanism by entering the right email & password.
// You can compare it with your desired email & password.
// For example,
// Input:
// Enter your email: admin@gmail.com
// Enter your password: 123456
// Output:
// Login Successful...
// -----------------------------------------
// For example,
// Input:
// Enter your email: xyz@gmail.com
// Enter your password: 123456
// Output:
// Login Failed. Invalid Credentials.

#include <stdio.h>

int main()
{
    char email[100], password[100];
    char desired_email[100] = "admin@gmail.com";
    char desired_password[100] = "123456";
    int flag = 0;
    printf("Enter your email: ");
    scanf("%s", email);
    printf("Enter your password: ");
    scanf("%s", password);
    if (strcmp(email, desired_email) == 0 && strcmp(password, desired_password) == 0)
    {
        printf("Login Successful...\n");
    }
    else
    {
        printf("Login Failed. Invalid Credentials.\n");
    }
    return 0;
}