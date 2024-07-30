// Write a Program to print the Fibonacci series up to N numbers using a for loop.
// For example,
// Input:
// Enter any number: 8
// Output:
// 0, 1, 1, 2, 3, 5, 8, 13

// #include <stdio.h>
// int main()
// {
//     int n, i, t1 = 0, t2 = 1, next;
//     printf("Enter any number: ");
//     scanf("%d", &n);
//     printf("Fibonacci Series up to %d terms: ", n);
//     for (i = 0; i < n; i++)
//     {
//         if (i <= 1)
//             printf("%d ", i);
//         else
//         {
//             next = t1 + t2;
//             printf("%d ", next);
//             t1 = t2;
//             t2 = next;
//         }
//     }
// }

// #include <stdio.h>

// int main()
// {
//     int n, i, t1 = 0, t2 = 1, next;
//     printf("Enter any number: ");
//     scanf("%d", &n);

//     printf("Fibonacci Series up to %d terms: ", n);
//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", t1);
//         next = t1 + t2;
//         t1 = t2;
//         t2 = next;
//     }
// }

// #include <stdio.h>

// int main()
// {
//     int n, i, t1, t2, next;
//     printf("Enter any number: ");
//     scanf("%d", &n);

//     printf("Fibonacci Series up to %d terms: ", n);

//     if (n > 0)
//     {
//         t1 = 0; 
//         printf("%d ", t1);
//     }
//     if (n > 1)
//     {
//         t2 = 1; 
//         printf("%d ", t2);
//     }

//     for (i = 2; i < n; i++)
//     {
//         next = t1 + t2;
//         printf("%d ", next);
//         t1 = t2;
//         t2 = next;
//     }
// }


#include<stdio.h>

int main(){
    int a=0,b=1,c,i;

    for(i=1;i<=10;i++){
        c = a;
        a = c + b;
        b = c;
        printf("%d, ",c);
    }
}

