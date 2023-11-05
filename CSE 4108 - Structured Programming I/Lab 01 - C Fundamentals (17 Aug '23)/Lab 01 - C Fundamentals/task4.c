/*
Bvaly is a multinational business venture that focuses on e-commerce. To cover the maintenance cost, they charge 5% VAT
for any item purchased. For example: If you buy a product worth $100.00, you have to pay $105.00 (including VAT). They
have hired you to automate the process of calculating the amount a customer needs to pay. Write a C program that asks the
user to ender the dollar-and-cents amount, then displays the amount with
5% VAT added.
*/

#include <stdio.h>
int main()
{
    float val, vat, tot;
    printf("\n\n\tPlease input the amount :\t");
    scanf("%f", &val);
    vat = (val / 100) * 5;
    tot = val + vat;
    printf("\n\n\tcustomer have to pay \t %.2f $\n\n", tot);
    return 0;
}