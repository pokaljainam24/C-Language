#include<stdio.h>
#define pi 3.14

int main(){
    float r, area;
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    area = pi*r*r;
    printf("\nValue of pi: %.2f",pi);
    printf("\nArea of circle: %f",area);
}
