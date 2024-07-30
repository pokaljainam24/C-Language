// Q.1
// Write a Program to print 1 to 10 using a do-while loop.
// For example,
// Output:
// 1 2 3 4 5 6 7 8 9 10

#include <stdio.h>
int main()
{
    int i = 1;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 10);
}
