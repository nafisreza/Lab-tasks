/*
Bear and Big brother:
Login to Codeforces using your handle and submit the solution to the following problem:
https://codeforces.com/problemset/problem/791/A
*/

#include <stdio.h>

int main()
{
    int limak, bob;
    int n = 0;
    scanf("%d %d", &limak, &bob);
    while (limak <= bob)
    {
        limak = limak * 3;
        bob = bob * 2;
        n = n + 1;
    }
    printf("%d", n);
    return 0;
}
