// Q.4 Write a Program to print odd numbers from N to 1 using a while loop.

// Input:
// Enter any number: 15
// Output:
// 15 13 11 9 7 5 3 1

#include<stdio.h>

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    int i = n;
    while (i >= 1) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i--;
    }
}