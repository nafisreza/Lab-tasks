/*
1. Repeat After Me:
Write a C program that takes an integer as an input and shows which digits (if any) were repeated.

Sample input:
Enter a number: 939577
Sample output:
Repeated digit(s): 7 9
*/

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int count[10] = {0};
    while (num != 0)
    {
        int rem = num % 10;
        count[rem]++;
        num /= 10;
    }

    printf("Repeated Digits: ");

    for (int i = 0; i < 10; i++)
    {
        if (count[i] > 1)
            printf("%d ", i);
    }

    return 0;
}
