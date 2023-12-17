/*
2. GCD:
Write a program in C to find GCD of two numbers using recursion.
*/

#include <stdio.h>
int gcd(int n1, int n2);

int main() {
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("GCD of %d and %d is %d.", n1, n2, gcd(n1, n2));
    return 0;
}

int gcd(int n1, int n2) {
    if( n2 == 0) return n1;
    else{
        if(n1 < n2) return gcd(n2, n1);
        else return gcd(n2, n1 % n2);
    }
}
