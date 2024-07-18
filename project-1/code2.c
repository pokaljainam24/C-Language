// Q.2 Gross Salary Calculator
// Create a program that calculates the gross salary by adding percentages of HRA, DA, and TA to
// the base salary as chosen by the user.

#include<stdio.h>

void main(){
    int base_salary;
    float hra, da, ta, gross_salary,r;
    printf("Enter the base salary: ");
    scanf("%d", &base_salary);
    printf("Enter the percentage of HRA: ");
    scanf("%f", &hra);
    r=hra / base_salary * 100;
    printf("Enter the percentage of DA:");
    scanf("%f", &da);
    r=da / base_salary * 100;
    printf("Enter the percentage of TA: ");
    r=ta / base_salary * 100;
    scanf("%f", &ta);
    gross_salary = base_salary + hra + da + ta;
    printf("The gross salary is: %f", gross_salary);
}

// #include <stdio.h>

// int main() {
//     float baseSalary, hra, da, ta, grossSalary;

//     baseSalary = 100;

//     hra = baseSalary * 0.10;
//     da = baseSalary * 0.05;
//     ta = baseSalary * 0.08;  
//     grossSalary = baseSalary + hra + da + ta;

//     printf("Gross Salary: Rs. %.2f\n", grossSalary);
// }
