/*
1. Look at the sizeof that thing!:
Write a program that prints the values of sizeof(int), sizeof(short), sizeof(long), sizeof(long long), sizeof(float), sizeof(double), and sizeof(long double).
*/

#include <stdio.h>

int main() {
    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Size of short: %d bytes\n", sizeof(short));
    printf("Size of long: %d bytes\n", sizeof(long));
    printf("Size of long long: %d bytes\n", sizeof(long long));
    printf("Size of float: %d bytes\n", sizeof(float));
    printf("Size of double: %d bytes\n", sizeof(double));
    printf("Size of long double: %d bytes\n", sizeof(long double));

    return 0;
}
