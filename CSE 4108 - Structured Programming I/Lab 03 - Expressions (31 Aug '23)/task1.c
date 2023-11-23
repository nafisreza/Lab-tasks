/*
Write a program that asks the user to enter a two-digit number, then prints the number with its digits reversed.

Sample Run:
Enter a two-digit number: 28
The reversal is: 82
*/

#include <stdio.h>
int main()
{
    int num, n1, n2;
    printf("Enter a two-digit number : ");
    scanf("%d", &num);
    n1 = num / 10;
    n2 = num % 10;
    printf("The reversal is : %d%d\n\n", n2, n1);
    return 0;
}