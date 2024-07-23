// Q.4 Write a Program to Swap two variables using the third variable.

#include<stdio.h>

void main(){
    int a,b,c;
    a=10;
    b=23;
    c=a;
    a=b;
    b=c;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}