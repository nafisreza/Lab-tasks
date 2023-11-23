/*
Reverse Digits 2 - Use of Loops:
In Lab 4 - Expressions (Reverse Digits), you were asked to write a program that displays a two-digit number with its digits reversed. Generalize the program so that the number can have one, two, three, or more digits.
*/

#include <stdio.h>

int main() {

  int n, reverse = 0, remainder;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("%d", reverse);

  return 0;
}
