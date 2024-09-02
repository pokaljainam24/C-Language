// Q.1 Length Finder
// Develop a program that finds the length of a string using a pointer.
// Example:
// Input: Enter any string: hello world
// Output: The length of a string is: 11

#include <stdio.h>

int stringLength(char *s) {
    int l = 0;
    while (*s != '\0') {
        l++;
        s++;
    }
    return l;
}

int main() {
    char s[100];

    printf("Enter any string: ");
    fgets(s, sizeof(s), stdin);

    int len = stringLength(s);
    if (s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

    printf("The length of the string is: %d\n", stringLength(s));
    
    return 0;
}
