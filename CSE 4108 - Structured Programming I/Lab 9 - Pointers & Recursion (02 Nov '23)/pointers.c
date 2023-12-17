/*
4. Pointers:
Write a program that declares and initializes (to any value you like) a double, an
int, and a char. Next declare and initialize a pointer to each of the three variables. Your
program should then print the address of, and value stored in, and the memory size (in
bytes) of each of the six variables. 

Here’s an example of the desired output:
The address of char c is 0x61feff
The address of int i is 0x61fef4
The address of double d is 0x61fee8
The address of char* pc is 0x61fef8
The address of int* pi is 0x61fef0
The address of double* pd is 0x61fee4
The value of char c is a
The value of int i is 1
The value of double d is 2.500000
The value of char* pc is 6422271
The value of int* pi is 6422260
The value of double* pd is 6422248
The size of char is 1
The size of int is 4
The size of double is 8
The size of char* is 4
The size of int* is 4
The size of double* is 4

Note: Use the “0x%x” format specifier to print the addresses in hexadecimal.
Hint: Use the function sizeof() to get the memory size.
*/

#include <stdio.h>

int main() {
  double d = 2.5;
  int i = 1;
  char c = 'a';

  double *pd = &d;
  int *pi = &i;
  char *pc = &c;

  printf("The address of char c is 0x%x\n", pc);
  printf("The address of int i is 0x%x\n", pi);
  printf("The address of double d is 0x%x\n", pd);
  printf("The address of char* pc is 0x%x\n", &pc);
  printf("The address of int* pi is 0x%x\n", &pi);
  printf("The address of double* pd is 0x%x\n", &pd);

  printf("The value of char c is %c\n", c);
  printf("The value of int i is %d\n", i);
  printf("The value of double d is %f\n", d);
  printf("The value of char* pc is %d\n", pc);
  printf("The value of int* pi is %d\n", pi);
  printf("The value of double* pd is %d\n", pd);

  printf("The size of char is %d\n", sizeof(c));
  printf("The size of int is %d\n", sizeof(i));
  printf("The size of double is %d\n", sizeof(d));
  printf("The size of char* is %d\n", sizeof(pc));
  printf("The size of int* is %d\n", sizeof(pi));
  printf("The size of double* is %d\n", sizeof(pd));

  return 0;

0;
}