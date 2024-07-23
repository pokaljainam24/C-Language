// 2. Write a Program to find if a given number is neutral or not using a ladder if else.

#include <stdio.h>

void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num == 0){
        printf("Neutral\n");
    }
    else if(num > 0){
        printf("Positive\n");
    }
    else{
        printf("Negative\n");
    }
}