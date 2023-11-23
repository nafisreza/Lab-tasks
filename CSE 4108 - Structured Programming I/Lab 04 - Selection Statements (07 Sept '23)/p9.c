/*
Using the switch statement, write a program that converts a numerical grade into a letter grade.
Sample run:
Enter numerical grade: 84
Letter grade: B
Use the following grading scale: A = 90-100, B = 80-89, C = 70-79, D = 60-69, F = 0-59.
Print an error message if the grade is larger than 100 or less than 0.
*/

#include <stdio.h>
int main()
{
    int grade;
    printf("\nEnter a numerical grade: ");
    scanf("%d", &grade);
    if (grade < 0 || grade > 100)
    {
        printf("Error !!! \n\n");
    }
    grade = grade - (grade % 10);
    printf("Letter grade: ");
    switch (grade)
    {
    case 100:
    case 90:
        printf("A");
        break;
    case 80:
        printf("B");
        break;
    case 70:
        printf("C");
        break;
    case 60:
        printf("D");
        break;
    case 50:
    case 40:
    case 30:
    case 20:
    case 10:
    case 0:
        printf("F");
        break;
    }
    printf("\n\n");
    return 0;
}