// Q.2 Write a Program to print 10 to 1 using a while loop.

// Output:
// 10 9 8 7 6 5 4 3 2 1

#include<stdio.h>

int main(){
    int i = 10;
    while(i >= 1){
        printf("%d ", i);
        i--;
    }
}