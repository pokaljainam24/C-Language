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

// #include <stdio.h>

// int main()
// {
//     int num;

//     printf("Enter a number:\n");
//     scanf("%d", &num);
//     num = -num;
//     printf("The converted number is: %d\n", num);
// }

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

// ********************************************************************************************************************************************** //

// 1. write a c program that prompts the user to enter a 3 digits positive integer. Find the sum of first and last digit.

// #include <stdio.h>

// int main()
// {
//     int num, first_digit, last_digit, sum;
//     printf("Enter any number: ");
//     scanf("%d", &num);
//     first_digit = num / 100;
//     last_digit = num % 10;
//     sum = first_digit + last_digit;
//     printf("The sum of the first and the last digit: %d", sum);
// }

// #include <stdio.h>

// int main()
// {
//     int num, first_digit, last_digit, sum;

//     printf("Enter a 3-digit positive integer: ");
//     scanf("%d", &num);

//     if (num < 100 || num > 999)
//     {
//         printf("Invalid input! Please enter a 3-digit positive integer.\n");
//     }

//     last_digit = num % 10;
//     first_digit = num / 100;
//     sum = first_digit + last_digit;

//     printf("The sum of the first and last digits is: %d\n", sum);

// }

// 2. develope a c program that reads a sentence from the user. create a function to count the occurrences of each consonant in the sentence and display the count.

// 3. 10 9 8 7 6
//       9 8 7 6
//         8 7 6
//           7 6
//             6
// using nested for loop

// #include <stdio.h>

// int main()
// {
//     int i, j, k;

//     for (i = 10; i >= 6; i--)
//     {
//         for (j = 10; j > i; j--)
//         {
//             printf("  ");
//         }

//         for (k = i; k >= 6; k--)
//         {
//             printf("%d ", k);
//         }
//         printf("\n");
//     }
// }

// 3. create c program that defines a function to check if a given number is divisible by 3 and 5 both or not.

// #include <stdio.h>

// void main()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if (num % 3 == 0 && num % 5 == 0)
//     {
//         printf("%d is divisible by both 3 and 5", num);
//     }
//     else
//     {
//         printf("%d is not divisible by both 3 and 5", num);
//     }
// }

// 4. write a c program that uses pointers to find the sum of two 1D arrays.

// #include <stdio.h>

// void main()
// {
//     int arr1[5] = {1, 2, 3, 4, 5};
//     int arr2[5] = {6, 7, 8, 9};
//     int sum = 0;
//     int *ptr1 = arr1;
//     int *ptr2 = arr2;
//     int i;
//     for (i = 0; i < 5; i++)
//     {
//         sum += *ptr1 + *ptr2;
//         ptr1++;
//         ptr2++;
//     }
//     printf("Sum of two arrays is: %d", sum);
// }

// 5. develop a c program that uses a structure to represent a mobile (with attributes like company_name,color,model,and price).list N number of mobiles details using Array of objects.

#include <stdio.h>

// Define a structure to represent a mobile
struct Mobile {
    char company_name[50];
    char color[20];
    char model[50];
    float price;
};

int main() {
    int n;

    // Ask the user for the number of mobiles
    printf("Enter the number of mobiles: ");
    scanf("%d", &n);

    // Array of structures
    struct Mobile mobiles[n];

    // Input details for each mobile
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for mobile %d:\n", i + 1);

        printf("Enter company name: ");
        scanf("%s", mobiles[i].company_name);

        printf("Enter color: ");
        scanf("%s", mobiles[i].color);

        printf("Enter model: ");
        scanf("%s", mobiles[i].model);

        printf("Enter price: ");
        scanf("%f", &mobiles[i].price);
    }

    // Display the list of mobiles
    printf("\nList of Mobile Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nMobile %d:\n", i + 1);
        printf("Company Name: %s\n", mobiles[i].company_name);
        printf("Color: %s\n", mobiles[i].color);
        printf("Model: %s\n", mobiles[i].model);
        printf("Price: $%.2f\n", mobiles[i].price);
    }
}

