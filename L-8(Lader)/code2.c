#include <stdio.h>

int main()
{
    char name[50];
    int roll_number;
    float marks1, marks2, marks3, avg;

    printf("Enter student's name: ");
    scanf("%s", name);

    printf("Enter roll number: ");
    scanf("%d", &roll_number);

    printf("Enter marks for subject 1: ");
    scanf("%f", &marks1);

    printf("Enter marks for subject 2: ");
    scanf("%f", &marks2);

    printf("Enter marks for subject 3: ");
    scanf("%f", &marks3);

    avg = (marks1 + marks2 + marks3) / 3;

    printf("\nStudent Details:\n");
    printf("Name: %s", name);
    printf("Roll Number: %d\n", roll_number);
    printf("Marks: %.2f, %.2f, %.2f\n", marks1, marks2, marks3);
    printf("Average Marks: %.2f\n", avg);

    if (avg >= 90)
    {
        printf("Grade: A\n");
    }
    else if (avg >= 80)
    {
        printf("Grade: B\n");
    }
    else if (avg >= 70)
    {
        printf("Grade: C\n");
    }
    else if (avg >= 60)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F\n");
    }
    
}
