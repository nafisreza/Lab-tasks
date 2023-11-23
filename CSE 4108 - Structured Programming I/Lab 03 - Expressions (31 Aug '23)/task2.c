/*
Extend the reverse program from the previous task to handle three-digit numbers.
*/

#include <stdio.h>
int main()
{
    int num, n1, n2, n3, rem1;
    printf("Enter a three-digit number : ");
    scanf("%d", &num);
    n1 = num / 100;
    rem1 = num % 100;
    n2 = rem1 / 10;
    n3 = rem1 % 10;
    printf("The reversal is : %d%d%d\n\n", n3, n2, n1);
    return 0;
}