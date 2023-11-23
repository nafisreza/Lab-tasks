/*
Is your horseshoe on the other hoof?:
Login to Codeforces using the account you created in the previous lab. Solve the following problem:
https://codeforces.com/problemset/problem/228/A
*/

#include <stdio.h>
 
int main(){
    int a,b,c,d;
    int cnt=0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
 
    if(b == a) cnt=cnt+1;;
    if(c == b || c==a) cnt=cnt+1;;
    if(d == c || d == b | d == a) cnt=cnt+1;;
 
    printf("%d",cnt);
return 0;
}