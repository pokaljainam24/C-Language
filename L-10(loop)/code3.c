// Q.3 Write a Program to print 1 to N using a while loop.

// Input:
// Enter any number: 7
// Output:
// 1 2 3 4 5 6 7

#include<stdio.h>

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    int i = 1;
    while(i <= n){
        printf("%d ",i);
        i++;
    }
}