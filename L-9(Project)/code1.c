// 1. Menu-Driven Program:
// - Display a menu to the user with options to add scores, display grades, and exit the program.
// - Use loops and control statements (if, if-else, nested if, else-if ladder) to handle user inputs and menu navigation.

#include <stdio.h>

void main()
{
    int choice;
    int score;
    int total = 0;
    int count = 0;
    float average = 0.0;
    char grade;
    printf("Enter 1 to add a score, 2 to display grades, and 3");
    printf("to exit the program: ");
    scanf("%d", &choice);
    while (choice != 3)
    {
        if (choice == 1)
        {
            printf("Enter a score: ");
            scanf("%d", &score);
            total += score;
            count++;
            average = total / count;
            printf("The average is: %f\n", average);
        }
        else if (choice == 2)
        {
            if (average >= 90)
            {
                grade = 'A';
            }
            else if (average >= 80)
            {
                grade = 'B';
            }
            else if (average >= 70)
            {
                grade = 'C';
            }
            else if (average >= 60)
            {
                grade = 'D';
            }
            else
            {
                grade = 'F';
            }
            printf("The grade is: %c\n", grade);
        }
        else
        {
            printf("Invalid choice.\n");
        }
        printf("Enter 1 to add a score,\n 2 to display grades, and 3");
        printf("to exit the program: ");
        scanf("%d", &choice);
    }
}

// Type-2

// #include <stdio.h>

// int main(void)
// {
//     int choice;
//     int score;
//     int total = 0;
//     int count = 0;
//     float average = 0.0;
//     char grade;

//     while (1)
//     {
//         printf("Enter 1 to add a score, 2 to display grades, and 3 to exit the program: ");
//         scanf("%d", &choice);

//         if (choice == 1)
//         {
//             printf("Enter the number of scores to add: ");
//             int num_scores;
//             scanf("%d", &num_scores);

//             for (int i = 0; i < num_scores; i++)
//             {
//                 printf("Enter score %d: ", i + 1);
//                 scanf("%d", &score);
//                 total += score;
//                 count++;
//             }

//             average = (float)total / count;
//             printf("The average is: %.2f\n", average);
//         }
//         else if (choice == 2)
//         {
//             if (count == 0)
//             {
//                 printf("No scores entered yet.\n");
//                 continue;
//             }

//             if (average >= 90)
//             {
//                 grade = 'A';
//             }
//             else if (average >= 80)
//             {
//                 grade = 'B';
//             }
//             else if (average >= 70)
//             {
//                 grade = 'C';
//             }
//             else if (average >= 60)
//             {
//                 grade = 'D';
//             }
//             else
//             {
//                 grade = 'F';
//             }
//             printf("The grade is: %c\n", grade);
//         }
//         else if (choice == 3)
//         {
//             printf("Exiting the program.\n");
//             break;
//         }
//         else
//         {
//             printf("Invalid choice.\n");
//         }
//     }
// }
