/*
Forever A loan:
ABC Bank Ltd. provides loans to its customers. The customers return the amount by a fixed monthly payment. On each month however, the remaining balance is incremented by the interest rate assigned for each customer. 
The total balance at the end of each month can be calculated using the following formula: currBalance = prevBalance - pay + (prevBalance × rate)
Here,
currBalance = Updated Balance
prevBalance = Previous Balance
pay = Monthly Payment
rate = Monthly Interest Rate

Your task is to write a program that calculates the remaining payable amount on a loan after each monthly payment. Your program will take the loan amount, yearly interest rate, and ask the user for monthly payments as inputs and show the remaining balance as outputs. When the user enters 0 or a negative number, the program will end. You need to display each balance with two digits after the decimal point.
*/

#include <stdio.h>

int main() {
   float loan = 0.0f, rate = 0.0f, payment = 0.0f, currBalance = 0.0f, prevBalance = 0.0f;
    int i, numOfPayments;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);


    for(i=1; i<= numOfPayments; i++){
        currBalance = prevBalance - payment + (prevBalance * rate);
    }
    printf("Balance remaining after payment 1: %d", currBalance);

  return 0;
}
