/*
Write a program that reads an integer entered by the user and displays it in octal (base 8).

Sample run:
Enter a number between 0 and 32767: 1953
In octal, your number is: 03641
*/

#include <stdio.h>
int main()
{
    int num, n1, n2, n3, n4, n5, d1, d2, d3, d4;
    printf("Enter a number between 0 and 32767 : ");
    scanf("%d", &num);
    n1 = num % 8;
    d1 = num / 8;
    n2 = d1 % 8;
    d2 = d1 / 8;
    n3 = d2 % 8;
    d3 = d2 / 8;
    n4 = d3 % 8;
    d4 = d3 / 8;
    n5 = d4 % 8;
    printf("In octal, your number is : %d%d%d%d%d", n5, n4, n3, n2, n1);
    return 0;
}