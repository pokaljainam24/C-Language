// 1. Write a Program to perform all arithmetic operators such as +, -, *, / and %

// Addition of 12 and 6 is 18
// Subtraction of 12 and 6 is 6
// Multiplication of 12 and 6 is 72
// Division of 12 and 6 is 2
// Modulo of 12 and 6 is 0

// #include<stdio.h>

// void main(){
//     int num1, num2, sum;
//     num1 = 12;
//     num2 = 6;
//     sum = num1 + num2;

//     printf("Addition of 12 + 6 = %d", sum);
// }

// #include<stdio.h>

// void main(){
//     int num1, num2, sum;
//     num1 = 12;
//     num2 = 6;
//     sum = num1 - num2;

//     printf("Subtraction of 12 - 6 = %d", sum);
// }

// #include<stdio.h>

// void main(){
//     int num1, num2, sum;
//     num1 = 12;
//     num2 = 6;
//     sum = num1 * num1;


//     printf("Multiplication of 12 * 6 = %d", sum);
// }

// #include<stdio.h>

// void main(){
//     int num1, num2, sum;
//     num1 = 12;
//     num2 = 6;
//     sum = num1 / num2;

//     printf("Division of 12 / 6 = %d", sum);
// }

// #include<stdio.h>

// void main(){
//     int num1, num2, sum;
//     num1 = 12;
//     num2 = 6;
//     sum = num1 % num2;

//     printf("Modulo of 12 / 6 = %d", sum);
// }


// 2. Write a Program to find a square of a number in a rectangular box.

#include<stdio.h>

void main(){

    int num1, num2, sum;
    num1 = 5;
    num2 = 5;
    sum = num1 * num2;

    printf("\n- - - - - - - - ");
    printf("\n|             |");
    printf("\n| 5 x 5 = 25  |");
    printf("\n|             |"); 
    printf("\n- - - - - - - - ");                 
    printf("\n%d", sum);
}