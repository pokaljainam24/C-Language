// Q.2 Write a Program to evaluate the formula: (x − y)^2

#include<stdio.h>

void main(){
    int x,y;
    int result;
    printf("\n Enter the value of x - y: ");
    scanf("%d %d",&x,&y);
    result = (x-y) * (x-y);
    printf("\n The value of (x-y)^2 is: %d",result);
}