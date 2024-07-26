// Step 3: Eligibility Check

// Further, extend the program to check eligibility for the next level based on the grade using an
// if-else statement. Print ‘Congratulations! You are eligible for the next level’ if the grade is from
// ‘A’ to ‘D’. Print ‘Please try again next time’ if the grade is ‘F’.

// Example:
// Input: Enter your score: 85
// Output: Your grade is A. Excellent work! You are eligible for the next level.

#include <stdio.h>

void main()
{
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);

    if (score >= 90 && score <= 99)
    {
        printf("Your grade is A. Excellent work! You are eligible for the next level.\n");
    }
    else if (score >= 80 && score <= 89)
    {
        printf("Your grade is B. Good work! You are eligible for the next level.\n");
    }
    else if (score >= 70 && score <= 79)
    {
        printf("Your grade is C. You need to work harder.\n");
    }
    else if (score >= 60 && score <= 69)
    {
        printf("Your grade is D. You need to work harder.\n");
    }
    else if (score >= 0 && score <= 59)
    {
        printf("Your grade is F. Please try again next time.\n");
    }
    else
    {
        printf("Invalid score.\n");
    }
}
