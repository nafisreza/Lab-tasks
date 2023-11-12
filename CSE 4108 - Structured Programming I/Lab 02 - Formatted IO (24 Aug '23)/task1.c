/*
It’s a Date:
Write a program that accepts a date from the user in the format mm/dd/yyyy and then displays it in the form yyyymmdd.

Sample Run:
Enter a date (mm/dd/yyyy): 2/17/2021
You entered the data 20210217
*/

#include <stdio.h>
int main()
{
    int num, sum, d1, rem1, d2, rem2, d3, rem3, d4, rem4;
    printf("\n\n\tEnter a five-digit integer : ");
    scanf("%d", &num);
    d1 = num / 10000;
    rem1 = num % 10000;
    d2 = rem1 / 1000;
    rem2 = rem1 % 1000;
    d3 = rem2 / 100;
    rem3 = rem2 % 100;
    d4 = rem3 / 10;
    rem4 = rem3 % 10;
    sum = d1 + d2 + d3 + d4 + rem4;
    printf("\n\n\tThe sum is : %d\n\n", sum);
    return 0;
}