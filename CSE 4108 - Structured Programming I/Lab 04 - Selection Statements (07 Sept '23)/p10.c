/*
Number Translator:
Write a program that asks the user for a two-digit number, then prints the English word for the number.
Sample run:
Enter a two-digit number: 45
You entered the number forty-five
*/

#include <stdio.h>
int main()
{
    int number, a, b;
    printf("\nEnter a two-digit number: ");
    scanf("%d", &number);
    if (number < 10 || number > 99)
    {
        printf("The number did not contain two digits\n\n");
        return 0;
    }
    a = number - (number % 10);
    b = number % 10;
    printf("You entered the number ");
    if (a == 10)
    {
        switch (b)
        {
        case 0:
            printf("ten");
            break;
        case 1:
            printf("eleven");
            break;
        case 2:
            printf("twelve");
            break;
        case 3:
            printf("thirteen");
            break;
        case 4:
            printf("fourteen");
            break;
        case 5:
            printf("fifteen");
            break;
        case 6:
            printf("sixteen");
            break;
        case 7:
            printf("seventeen");
            break;
        case 8:
            printf("eighteen");
            break;
        case 9:
            printf("nineteen");
            break;
        }
        printf(".\n\n");
        return 0;
    }
    switch (a)
    {
    case 20:
        printf("twenty");
        break;
    case 30:
        printf("thirty");
        break;
    case 40:
        printf("forty");
        break;
    case 50:
        printf("fifty");
        break;
    case 60:
        printf("sixty");
        break;
    case 70:
        printf("seventy");
        break;
    case 80:
        printf("eighty");
        break;
    case 90:
        printf("ninety");
        break;
    }
    switch (b)
    {
    case 1:
        printf("-one");
        break;
    case 2:
        printf("-two");
        break;
    case 3:
        printf("-three");
        break;
    case 4:
        printf("-four");
        break;
    case 5:
        printf("-five");
        break;
    case 6:
        printf("-six");
        break;
    case 7:
        printf("-seven");
        break;
    case 8:
        printf("-eight");
        break;
    case 9:
        printf("-nine");
        break;
    }
    printf(".\n\n");
    return 0;
}