/*
Sasha and Sticks:
Login to Codeforces using your handle and submit the solution to the following problem:
https://codeforces.com/problemset/problem/832/A
*/

#include <stdio.h>

int main() {

    long long n,k;

    scanf("%lld %lld", &n, &k);

    if(n/k&2==1){
        printf("YES\n");
    } else{
        printf("NO\n");
    }

  return 0;
}
