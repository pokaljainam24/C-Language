// 3. Determine and Display Grades:
// - Calculate the average score of each student.
// - Use nested if statements and else-if ladder to determine the grade based on the average score.
// - Display the grades to the user

// - Use the following grade scale:
// - 90-100: A
// - 80-89: B
// - 70-79: C
// - 60-69: D
// - 0-59: F

#include <stdio.h>

int main()
{
    int score1, score2, score3, score4, score5, total, average;
    char grade;

    printf("Enter the first score: ");
    scanf("%d", &score1);
    
    printf("Enter the second score: ");
    scanf("%d", &score2);
    
    printf("Enter the third score: ");
    scanf("%d", &score3);
    
    printf("Enter the fourth score: ");
    scanf("%d", &score4);
    
    printf("Enter the fifth score: ");
    scanf("%d", &score5);
    
    total = score1 + score2 + score3 + score4 + score5;
    average = total / 5;
    
    if (average >= 90 && average <= 100)
    {
        grade = 'A';
    }
    else if (average >= 80 && average <= 89)
    {
        grade = 'B';
    }
    else if (average >= 70 && average <= 79)
    {
        grade = 'C';
    }
    else if (average >= 60 && average <= 69)
    {
        grade = 'D';
    }
    else if (average >= 0 && average <= 59)

    {
        grade = 'F';
    }
    else{
        printf("Invalid grade\n");
    }

    printf("The average score is %d\n", average);
    printf("The grade is %c\n", grade);
}