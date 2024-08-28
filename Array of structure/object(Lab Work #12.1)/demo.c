#include<stdio.h>

// struct s
// {
//     int a;
//     float avg;
// }s1;

// void main(){
//     printf("%d",sizeof(s1));
//     printf("%d",sizeof(s1.a));
// }

void main(){
    int a = 10;
    int *p;
    p = &a;

    printf("%d",a);
    printf("%d",*p);
    printf("%u",p);
}