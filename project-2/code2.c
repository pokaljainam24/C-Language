// Step 2: Additional Comments

// Extend the program to provide additional comments based on the grade using a switch-case
// statement. For example, if the grade is ‘A’, then print ‘Excellent work!’. If the grade is ‘B’, then
// print ‘Well done’. If the grade is ‘C’, then print ‘Good job’. If the grade is ‘D’, then print ‘You
// passed, but you could do better’. And if the grade is ‘F’, then print ‘Sorry, you failed’.

// Example:
// Input: Enter your score: 92
// Output: Your grade is A. Excellent work!

#include <stdio.h>

void main()
{
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);
    switch (score / 10)
    {
    case 10:
    case 9:
        printf("Your grade is A. Excellent work!\n");
        break;
    case 8:
        printf("Your grade is B. Well done!\n");
        break;
    case 7:
        printf("Your grade is C. Good job!\n");
        break;
    case 6:
        printf("Your grade is D. You passed, but you could do better!\n");
        break;
    default:
        printf("Your grade is F. Sorry, you failed!\n");
    }
}
