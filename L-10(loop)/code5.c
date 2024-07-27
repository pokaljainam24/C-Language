// Q.5 Write a Program to print leap years between two given numbers using a while loop.

// Input:
// Enter the first number: 2020
// Enter the second number: 2040
// Output:
// 2020, 2024, 2028, 2032, 2034, 2040

#include<stdio.h>

int main(){
    int start, end;
    printf("Enter the first number: ");
    scanf("%d", &start);
    printf("Enter the second number: ");
    scanf("%d", &end);
    int year = start;
    while (year <= end) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d, ", year);
        year++;
    }
}