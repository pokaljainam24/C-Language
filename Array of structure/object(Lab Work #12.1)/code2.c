// Q.2
// Write a Program to create an Employee Record System with an Array of objects for a
// given N number of employees using structure. Consider the below-mentioned
// attributes in the Employee structure:
// - emp_id
// - emp_name
// - emp_age
// - emp_role
// - emp_city
// - emp_experience
// - emp_company_name

#include <stdio.h>

struct Employee
{
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    int emp_experience;
    char emp_company_name[50];
};
void main()
{
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee emp[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of employee %d:\n", i + 1);
        printf("Enter the employee id: ");
        scanf("%d", &emp[i].emp_id);
        printf("Enter the employee name: ");
        scanf("%s", emp[i].emp_name);
        printf("Enter the employee age: ");
        scanf("%d", &emp[i].emp_age);
        printf("Enter the employee role: ");
        scanf("%s", emp[i].emp_role);
        printf("Enter the employee city: ");
        scanf("%s", emp[i].emp_city);
        printf("Enter the employee experience: ");
        scanf("%d", &emp[i].emp_experience);
        printf("Enter the employee company name: ");
        scanf("%s", emp[i].emp_company_name);
    }
}