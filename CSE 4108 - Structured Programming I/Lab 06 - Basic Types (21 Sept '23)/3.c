/*
3. Plus-Signed Fractions - The Sign Of Four:
In Lab 2 - Formatted Input/Output (Signed fraction problem), you were asked to write a program that added two fractions entered by the user. Modify the program so that the user may add, subtract, multiply, or divide two fractions (by entering either +, -, *, or / between the fractions).
*/

#include <stdio.h>

int main(void) {
    int num1, denom1, num2, denom2, result_num, result_denom;
    char operator;

    printf("Enter two fractions separated by an operator: ");
    scanf("%d /%d %c %d /%d", &num1, &denom1, &operator, &num2, &denom2);

    switch (operator) {
        case '+':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            break;
        case '/':
            result_num = num1 * denom2;
            result_denom = num2 * denom1;
            break;
        default:
            printf("Invalid input");
            return 0;
    }
}