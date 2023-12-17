/*
4. New Year and Counting Cards:
Login to Codeforces using your handle and submit the solution to the following problem:
https://codeforces.com/problemset/problem/908/A
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k;
    int n, m;
    char s[100];

    scanf("%s", &s);

    int cnt = 0;
    int l = strlen(s);

    for (i = 0; i < l; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            cnt++;
        else if (s[i] == '1' || s[i] == '3' || s[i] == '5' || s[i] == '7' || s[i] == '9')
            cnt++;
    }

    printf("%d", cnt);

    return 0;
}