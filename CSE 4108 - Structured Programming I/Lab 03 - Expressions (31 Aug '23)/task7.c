/*
The Swapperoo II (Temp not allowed):
Modify the program from the previous task so that it doesn’t use any temporary variable.
Hint: Think of the problem from a mathematical perspective.
*/

#include <stdio.h>
int main()
{
    int a, b;
    printf("input the first number a = ");
    scanf("%d", &a);
    printf("input the second number b = ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n\na = %d\nb = %d\n\n", a, b);

    return 0;
}