// #include <stdio.h>

// int main() {
//     int numbers[5], i, greatest;

//     printf("Enter 5 numbers:\n");
//     for(i = 0; i < 5; i++) {
//         scanf("%d", &numbers[i]);
//     }

//     greatest = numbers[0];
//     for(i = 1; i < 5; i++) {
//         if(numbers[i] > greatest) {
//             greatest = numbers[i];
//         }
//     }

//     printf("The greatest number is: %d\n", greatest);
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int a, b, c, middle;

//     printf("Enter 3 numbers:\n");
//     scanf("%d %d %d", &a, &b, &c);

//     if ((a > b && a < c) || (a < b && a > c))
//     {
//         middle = a;
//     }
//     else if ((b > a && b < c) || (b < a && b > c))
//     {
//         middle = b;
//     }
//     else
//     {
//         middle = c;
//     }

//     printf("The middle number is: %d\n", middle);
// }


// #include <stdio.h>

// int main() 
// {
//     int num;

//     printf("Enter a number:\n");
//     scanf("%d", &num);

//     if (num > 100)
//     {
//         num -= 10;
//     }

//     printf("The result is: %d\n", num);
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int num;

//     printf("Enter a number:\n");
//     scanf("%d", &num);

//     if (num > 0)
//     {
//         num = -num;
//     }
//     else if (num < 0)
//     {
//         num = -num;
//     }

//     printf("The converted number is: %d\n", num);
//     return 0;
// }


#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number:\n");
    scanf("%d", &num);
    num = -num;
    printf("The converted number is: %d\n", num);
}


// print even and odd number using for loop

// #include<stdio.h>

// void man(){
//     int num;
//     printf("Enter a number:\n");
//     scanf("%d", &num);
//     for (int i = 0; i <= num; i++){
//         if (i % 2 == 0){
//             printf("%d is even\n", i);
//         }
//         else{
//             printf("%d is odd\n", i);
//         }
//     }
// }

// #include<stdio.h>

// void main(){
//     int i;
//     for (i = 0; i < 10; i++){
//             printf("%d ", ++i);
//             printf(" %d\n",++i);
//             --i;
//     }
// }



