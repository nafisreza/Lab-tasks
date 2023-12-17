/*
5. Leap Year!:
Write a C function that checks whether a year is a Leap year or not.
Sample input:
Enter a year: 2016
Sample output:
Yes
*/

#include <stdio.h>

void leapYear(int year){

   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }

   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }

   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }

   else {
      printf("%d is not a leap year.", year);
   }
}
int main() {
   leapYear(2023);
}