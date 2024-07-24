// 3. Determine and Display Grades:
// - Calculate the average score of each student.
// - Use nested if statements and else-if ladder to determine the grade based on the average score.
// - Display the grades to the user

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
    
    if (average >= 90)
    { 
        grade = 'A';
    }
    else if (average >= 80 && average <= 90) 
    {
        grade = 'B';  
    }
    else if (average >= 70 && average <= 80)
    {
        grade = 'C';
    }
    else if (average >= 60 && average <= 70)
    {
        grade = 'D';
    }
    else if (average >= 0 && average <= 60)

    {
        grade = 'F';
    }
    else{
        printf("Invalid grade\n");
    }

    printf("The average score is %d\n", average);
    printf("The grade is %c\n", grade);
}

// OUTPUT:

//        Enter the first score: 50
//        Enter the second score: 80
//        Enter the third score: 60
//        Enter the fourth score: 40
//        Enter the fifth score: 90
//        The average score is 64
//        The grade is D