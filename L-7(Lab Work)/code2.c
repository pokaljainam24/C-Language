// 2. Write a Program to find the maximum number from the given 4 numbers using nested if else. Also, draw a Flowchart in your book.

#include <stdio.h>

void main(){
    int a, b, c, d, max;
    printf("Enter 4 numbers: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d, &max);
    if(a > b){
        if(a > c){
            if(a > d){
                max = a;
            }
            else{
                max = d;
            }
        }
        else{
            if(c > d){
                max = c;
            }
            else{
                max = d;
            }
        }
    }
    else{
        if(b > c){
            if(b > d){
                max = b;
            }
            else{
                max = d;
            }
        }
        else{
            if(c > d){
                max = c;
            }
            else{
                max = d;
            }
        }
    }
    printf("Maximum number is: %d", max);
}

