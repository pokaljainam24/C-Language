// Q.5 Write a Program to Swap two variables without using a third variable.

#include<stdio.h>

void main(){
    int a,b;
    a=10;
    b=20;
    printf("\n Before swapping a=%d and b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n After swapping a=%d and b=%d\n",a,b);
}
