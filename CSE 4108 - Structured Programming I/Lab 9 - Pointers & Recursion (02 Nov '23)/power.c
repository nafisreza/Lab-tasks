/*
1. With Great Power, Comes Great Responsibility!:
power.c (Can be found on Chapter 9, page 205) can be made faster by having it
calculate in a different way. We first notice that if n is a power of 2, then can be
computed by squaring. For example, is the square of , so can be computed using only
two multiplications instead of three. As it happens, this technique can be used even
when n is not a power of 2. If n is even, we use the formula = . If n is odd, then = .
Write a recursive function that computes .
(The recursion ends when n = 0, in which case the function returns 1).
To test your function, write a program that asks the user to enter values for x and n,
calls power to compute , and
then displays the value returned by the function.
*/

#include<stdio.h>

int power(int, int);

int main(void)
{
    int x, n;
    printf("Enter a number and power. \n");
    scanf("%d %d", &x, &n);
    printf("Result: %d\n", power(x, n));
    return 0;
}

int power(int x, int n)
{
    int m;
    if (n == 0) return 1;
    if (n % 2 == 0) {
        m = power(x, n / 2);
        return m * m;
    } else return x * power(x, n - 1);
}