/*
Blackjack:
Log in to Codeforces using your ID and submit the solution to the following problem:
https://codeforces.com/problemset/problem/104/A
*/

#include <stdio.h>
 
int main(void)
{
  int n,total;
 
  scanf("%d",&n);
 
 if(n>0 && n<11){
    printf("%d",0);
 }
 else if(n>10 && n<20){
 printf("%d",4);
    }
    else if(n==20) {printf("%d",15);}
    else if(n==21) {printf("%d",4);}
    else{
        printf("%d",0);
    }
  return 0;
}