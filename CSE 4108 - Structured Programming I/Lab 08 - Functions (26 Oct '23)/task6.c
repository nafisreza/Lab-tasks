/*
6. Prime, Armstrong, Perfect Numbers:
Write a C program to check whether a number is prime, armstrong, perfect number or not, using functions. You have to write three separate functions for this task.

For your reference:
Prime Number: https://en.wikipedia.org/wiki/Prime_number
Armstrong Number(Narcissistic Number!):
https://mathworld.wolfram.com/NarcissisticNumber.html
Perfect Number: 
https://mathworld.wolfram.com/PerfectNumber.html

Sample input:
Input any number: 11

Sample output:
11 is prime number
11 is not a armstrong number
11 is not a perfect number
*/

#include <stdio.h>

void primeChecker(int n){
    int i, flag = 0;

  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 0)
    printf("%d is a prime number.\n", n);
  else
    printf("%d is not a prime number.\n", n);

}

void perfectChecker(int n){
    int i =1, sum = 0;

    while(i < n){
        if (n % i == 0) sum += i;
        i++;
    }

    if(sum == n) printf("%d is a perfect number\n", n);
    else printf("%d is not a perfect number\n", n);
}

int main() {
    primeChecker(11);
    perfectChecker(28);
}