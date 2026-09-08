//Write a C program to accept a person's blood group, height, weight, and salary as input from the user and display the output
#include <stdio.h>

int main()
{
    char bloodGroup[5];
    float height;
    float weight;
    float salary;

    printf("Enter blood group: ");
    scanf("%s", bloodGroup);

    printf("Enter height (in cm): ");
    scanf("%f", &height);

    printf("Enter weight (in kg): ");
    scanf("%f", &weight);

    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("\n--- Person Details ---\n");
    printf("Blood Group : %s\n", bloodGroup);
    printf("Height      : %.2f cm\n", height);
    printf("Weight      : %.2f kg\n", weight);
    printf("Salary      : $%.2f\n", salary);

    return 0;
}