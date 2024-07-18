// 3. Write a Program to find an average mark from a total of three subject marks of a student. Each subject’s marks must be given out of 100.

#include<stdio.h>

void main(){
    int maths, physics, chemistry, total, average;
    printf("Enter the marks of maths, physics and chemistry: \n");
    scanf("%d %d %d", &maths, &physics, &chemistry);
    total = maths + physics + chemistry;
    average = total / 3;
    printf("The average mark is: %d.33", average);
}
