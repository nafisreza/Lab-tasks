/*
Consider a C program that prompts the user to enter two fractions like the given sample input and then displays their sum. Fractions are customarily denoted as: numerator/denominator.

Sample Run:
Enter two fractions separated by a plus sign:
5/6+3/4
The sum is 38/24
*/

#include <stdio.h>

int main()
{
    int n1, d1, n2, d2, n, d;
    printf("\tEnter two fractions separated by a plus sign : ");
    scanf("%d/%d+%d/%d", &n1, &d1, &n2, &d2);
    d = d1 * d2;
    n = (n1 * d2) + (n2 * d1);
    printf("\n\n\tThe sum is : %d/%d\n\n", n, d);
    return 0;
}