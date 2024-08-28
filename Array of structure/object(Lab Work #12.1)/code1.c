// Q.1
// Write a Program to create a Student Record System for 3 students using structure.
// Consider the below-mentioned attributes in the Student structure:
// - stu_id
// - stu_name
// - stu_age
// - stu_course
// - stu_city
// - stu_standard
// - stu_school

#include <stdio.h>

struct Student
{
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[50];
    int stu_standard;
    char stu_school[50];
};

int main()
{
    struct Student s1, s2, s3;
    printf("Enter Student 1 Details:\n");
    printf("Student ID: ");
    scanf("%d", &s1.stu_id);
    printf("Student Name:\n ");
    scanf("%s", s1.stu_name);
    printf("Student Age: ");
    scanf("%d", &s1.stu_age);
    printf("Student Course: ");
    scanf("%s", s1.stu_course);
    printf("Student City: ");
    scanf("%s", s1.stu_city);
    printf("Student Standard: ");
    scanf("%d", &s1.stu_standard);
    printf("Student School: ");
    scanf("%s", s1.stu_school);
    printf("\n");
}