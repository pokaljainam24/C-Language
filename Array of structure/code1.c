#include<stdio.h>

struct car
{
    int id;
    char name[20];;
    char model[20];
    char color[20];
};

void main()
{
    struct car c1;
    printf("Enter Id: ");
    scanf("%d",&c1.id);
    printf("Enter Car: ");
    scanf("%s",&c1.name);
    printf("Enter Model: ");
    scanf("%s",&c1.model);
    printf("Enter Color: ");
    scanf("%s",&c1.color);

    printf("Id: %d\n",c1.id);
    printf("Name: %s\n",c1.name);
    printf("Model: %s\n",c1.model);
    printf("Color: %s\n",c1.color);
}