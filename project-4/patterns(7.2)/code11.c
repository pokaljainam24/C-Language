//  Q.11
//  Write a Program to print the below Full Pyramid pattern using nested for loop.
//          *
//        * * *
//      * * * * *
//    * * * * * * *
//  * * * * * * * * *

#include <stdio.h>
int main()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= (2*i-1); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}