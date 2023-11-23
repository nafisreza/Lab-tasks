/*
Soldiers and Bananas:
Visit Codeforces and submit the solution to the following problem: https://codeforces.com/problemset/problem/546/A
*/

#include <stdio.h>

int main() {

    int k, n, w;

    printf("");
    scanf("%d", &k);

    printf("");
    scanf("%d", &n);

    printf("");
    scanf("%d", &w);

    int totalCost = 0;
    for (int i = 1; i <= w; i++) {
    totalCost += i * k;
    }

    int borrowAmount = (totalCost > n) ? totalCost - n : 0;

    if (borrowAmount > 0) {
    printf("%d", borrowAmount);
    }
    else { printf("0");
    }

    return 0;
}
