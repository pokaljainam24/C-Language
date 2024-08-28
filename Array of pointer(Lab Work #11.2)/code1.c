// Q.1
// Write a Program to find the square of each elements of a 1D array and print in reverse
// order using a Chain of Pointers.
// For example,
// Input:
// Enter the array's size: 5
// Enter array elements:
// a[0] = 5
// a[1] = 9
// a[2] = 4
// a[3] = 7
// a[4] = 3
// Output:
// Reversed array elements:
// 9, 49, 16, 81, 25

// #include <stdio.h>

// void main()
// {
//     int n, i, j, *p, *q;
//     printf("Enter the array's size: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Enter array elements:\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("a[%d] = ", i);
//         scanf("%d",&a[i]);
//     }
//     p = a;
//     q = a + n - 1;
//     for (i = 0; i < n / 2; i++)
//     {
//         *p = (*p) * (*p);
//         p++;
//         *q = (*q) * (*q);
//         q--;
//     }
//     if (n % 2 != 0)
//     {
//         *p = (*p) * (*p);
//     }
//     p = a;
//     printf("Reversed array elements:\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d, ", *p);
//         p++;
//     }
// }


