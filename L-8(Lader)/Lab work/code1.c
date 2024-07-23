// 1. Write a Program to find the minimum number from the given 3 numbers using the ternary operator.

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    int min = (a<b)?(a<c)?a:c:(b<c)?b:c;
    printf("The minimum number is: %d",min);
}