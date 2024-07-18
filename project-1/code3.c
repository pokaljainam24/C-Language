// Q.3 Triangle Angle Finder
// Write a program to find the third angle of a right triangle when two other angles are given.

#include<stdio.h>

void main(){
    int a,b,c;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a,&b);
    c = 180 - (a+b);
    printf("The value of c is: %d", c);
}