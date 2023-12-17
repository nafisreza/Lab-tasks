/*
1. A self-dividing number is a number that is divisible by every digit it contains.
A self-dividing number is not allowed to contain the digit zero. Given two integers left and right, return a list of all the self-dividing numbers in the range [left, right].

Input
1 22
Output
1 2 3 4 5 6 7 8 9 11 12 15 22
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

bool isSelfDividable(int num) {
    int original = num;

    while (num > 0) {
        int digit = num % 10;
        if (digit == 0 || original % digit != 0) return false;
        num /= 10;
    }

    return true;
}

void selfDividerNumbers(int left, int right) {
    for (int num = left; num <= right; num++) {
        if (isSelfDividable(num)) printf("%d ", num);
    }
}

int main(){
    int left = 13;
    int right = 30;
    selfDividerNumbers(left, right);

    return 0;
}