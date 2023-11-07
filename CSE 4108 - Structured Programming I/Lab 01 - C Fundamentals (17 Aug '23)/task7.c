/*
Convenience Delivery Store(CDS) of Imperial University of Tokyo (IUT) is a retail business that stocks a range of everyday items such as snack foods, confectionery, soft drinks, toiletries, etc. As the university houses international students, the store accepts $ as payment currency. Everyday numerous students get their daily goods from CDS. After purchasing an item, whenever a student gives a note of large denomination (like $500 for example), the owner of the shop Mr. Sakamoto faces a huge problem. He can easily calculate the amount to be returned.
But he doesn’t know how to pay that amount using the smallest number of denominations.
Mr. Sakamoto knows you’re a great programmer and asked for your help. You need to write a program that takes the U.S. dollar amount as input and then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills.
Mr. Sakamoto has assured you that he will not enter any fractional value as input.
*/

#include <stdio.h>
int main()
{
    int i, twn, rem_1, ten, rem_2, fiv, rem_3;
    printf("\n\n\t\tMr Sakamoto, input the ammount please :\t\t\t");
    scanf("%d", &i);
    twn = i / 20;
    printf("\n\n\n\t\t\t20$ bills :\t %d", twn);
    rem_1 = i % 20;
    ten = rem_1 / 10;
    printf("\n\n\t\t\t10$ bills :\t %d", ten);
    rem_2 = rem_1 % 10;
    fiv = rem_2 / 5;
    printf("\n\n\t\t\t5$ bills :\t %d", fiv);
    rem_3 = rem_2 % 5;
    printf("\n\n\t\t\t1$ bills :\t %d", rem_3);
    return 0;
}