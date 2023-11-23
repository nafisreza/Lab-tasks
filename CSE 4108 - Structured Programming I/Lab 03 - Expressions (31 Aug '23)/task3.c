/*
Rewrite the reverse program from the previous task so that it prints the reversal of a three-digit number without using arithmetic to split the number into digits.
*/

#include <stdio.h>
int main()
{
    char a, b, c;
    printf("Enter a three-digit number : ");
    scanf("%c%c%c", &a, &b, &c);
    printf("The reversal is : %c%c%c", c, b, a);
    return 0;
}