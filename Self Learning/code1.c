// 1
// 1 2
// 1 3 5
// 1 6 11 16
// 1 17 33 49 65 print pattern using for loop

// #include<stdio.h>
// int main(){
//     int n = 5;
//     int i, j, k = 1;
//     for (i = 1; i <= n; i++){
//         for (j = 1; j <= i; j++){
//             printf("%d ", k);
//             k += j;
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>

// int main()
// {
//     int n = 5;
//     int a = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         int value = 1;
//         printf("%d ", value);

//         for (int j = 1; j < i; j++)
//         {
//             value += a;
//             printf("%d ", value);
//             ++a;
//         }

//         printf("\n");
//     }
// }

// #include <stdio.h>

// int main()
// {
//     int rows = 5;
//     int value;
//     int diff;

//     for (int i = 1; i <= rows; i++)
//     {
//         value = 1;
//         diff = i - 1;

//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d ", value);
//             value += diff;
//             diff++;
//         }

//         printf("\n");
//     }
// }

// #include<stdio.h>

// void main(){
//     printf("1 \n");
//     printf("1 2\n");
//     printf("1 3 5\n");
//     printf("1 6 11 16\n");
//     printf("1 17 33 49 65\n");
// }

#include <stdio.h>

void main()
{
    int a, b, c = 0;

    for (int i = 1; i <= 5; i++)
    { 
        a = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            b = a;
            a = c + a;
        }
        c = b; 
        printf("\n");
    }
}
