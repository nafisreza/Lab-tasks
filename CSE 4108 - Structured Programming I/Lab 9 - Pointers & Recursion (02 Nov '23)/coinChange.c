/*
6. Coin Change:
In Lab 1 - C Fundamentals (Problem: Counting Denominations), you wrote a
program that takes the U.S. dollar amount as input and then shows how to pay that
amount using the smallest number of $20, $10, $5, and $1 bills. Modify the program so
that it includes the following function:

int pay_amount (int dollars , int *denominations, int n);

Here, denominations is an array containing n different denomination amounts that will
be taken from the user. The function determines the smallest total number of all
denominations necessary to pay the amount represented by the dollars parameter.
*/

#include <stdio.h>

// Function declaration
int pay_amount(int dollars, int *denominations, int n);

int main() {
    int dollars, n;

    // Input the U.S. dollar amount
    printf("Enter the U.S. dollar amount: ");
    scanf("%d", &dollars);

    // Input the number of different denominations
    printf("Enter the number of different denominations: ");
    scanf("%d", &n);

    // Input the denominations
    int denominations[n];
    printf("Enter the denominations:\n");
    for (int i = 0; i < n; i++) {
        printf("Denomination %d: $", i + 1);
        scanf("%d", &denominations[i]);
    }

    // Call the pay_amount function
    int totalBills = pay_amount(dollars, denominations, n);

    // Display the result
    printf("The smallest total number of bills to pay $%d is %d.\n", dollars, totalBills);

    return 0;
}

// Function definition
int pay_amount(int dollars, int *denominations, int n) {
    int totalBills = 0;

    // Iterate through denominations in descending order
    for (int i = n - 1; i >= 0; i--) {
        // Calculate the number of bills of the current denomination
        int bills = dollars / denominations[i];

        // Update totalBills and remaining dollars
        totalBills += bills;
        dollars %= denominations[i];
    }

    return totalBills;
}
