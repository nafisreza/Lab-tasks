/*
The Swapperoo:
Write a program that stores two integers in two variables and then swaps the values of the two variables.
Hint: Use a temporary variable to store one value (a) and then overwrite a with other value (b). Assign the temporary variable to b.
*/

#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("input the first number a = ");
    scanf("%d", &a);
    printf("input the second number b = ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("\n\na = %d\nb = %d\n\n", a, b);
    return 0;
}