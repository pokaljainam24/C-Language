// Q.2 Structures and Percentage Calculation

// Develop a Program to generate mark sheets for a student. Enter the marks of 5 students in
// Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes:
// roll_no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each
// student.


#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
    int total_marks;
    float percentage;
};

void display_results(struct Student s) {
    printf("%s (%d)\n", s.name, s.roll_no);
    printf("Chemistry => %d\n", s.chem_marks);
    printf("Mathematics => %d\n", s.maths_marks);
    printf("Physics => %d\n", s.phy_marks);
    printf("Total => %d/300\n", s.total_marks);
    printf("Percent => %.2f%%\n\n", s.percentage);
}

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details of Student %d:\n", i + 1);
        printf("Roll no => ");
        scanf("%d", &students[i].roll_no);
        printf("Name => ");
        scanf(" %[^\n]s", students[i].name);
        printf("Chemistry => ");
        scanf("%d", &students[i].chem_marks);
        printf("Mathematics => ");
        scanf("%d", &students[i].maths_marks);
        printf("Physics => ");
        scanf("%d", &students[i].phy_marks);
        printf("\n");

        students[i].total_marks = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        students[i].percentage = (students[i].total_marks * 100.0) / 300.0;
    }

    for (int i = 0; i < 5; i++) {
        display_results(students[i]);
    }

    return 0;
}
