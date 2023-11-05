/*
ABC Bank Ltd. provides loans to its customers. The customers return the amount by a fixed monthly payment. On each month however, the remaining balance is incremented by theinterest rate assigned for each customer. The total balance at the end of each month can be calculated using the following formula:
      currBalance = prevBalance - pay + (prevBalance × rate)
        Here, currBalance = Updated Balance
            prevBalance = Previous Balance
            pay = Monthly Payment
            rate = Monthly Interest Rate

Your task is to write a program that calculates the remaining payable amount on a loan after the first, second, and third monthly payment.
Your program will take the loan amount, yearly interest rate, fixed monthly payment as input. You need to display each balance with two digits after the decimal point.

Sample Run:
Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66
Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71

Hint: To find the monthly interest rate, convert the interest rate entered by the user to a percentage and divide it by 12
*/

#include <stdio.h>
int main()
{
    float cb_1, prevBalance, pay, rate, rrate, cb_2, cb_3;
    // taking inputs
    printf("\n\nplease input the amount of loan :\t");
    scanf("%f", &prevBalance);
    printf("\n\nplease input your interest rate :\t");
    scanf("%f", &rrate);
    printf("\n\nplease input your monthly payment :\t");
    scanf("%f", &pay);
    // defining rate
    rate = rrate / (100 * 12);
    // the final calculation of loan
    //  cb_1 stands for current balance for 1 month and so on.
    cb_1 = prevBalance + (prevBalance * rate) - pay;
    printf("\n\nBalance remaining after first payment:\t %f", cb_1);
    cb_2 = cb_1 + (cb_1 * rate) - pay;
    printf("\n\nBalance remaining after second payment:\t %f", cb_2);
    cb_3 = cb_2 + (cb_2 * rate) - pay;
    printf("\n\nBalance remaining after third payment:\t %f\n\n", cb_3);

    return 0;
}