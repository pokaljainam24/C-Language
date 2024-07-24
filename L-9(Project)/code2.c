// 2. Add Student Scores:
// - Prompt the user to enter student scores for different subjects.
// - Use scanf and printf for input and output.

#include <stdio.h>

int main()
{
    int maths, physics, chemistry, biology, total;
    float average;
    printf("Enter the marks of maths: ");
    scanf("%d", &maths);
    printf("Enter the marks of physics: ");
    scanf("%d", &physics);
    printf("Enter the marks of chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter the marks of biology: ");
    scanf("%d", &biology);
    total = maths + physics + chemistry + biology;
    average = total / 4;
    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);
}