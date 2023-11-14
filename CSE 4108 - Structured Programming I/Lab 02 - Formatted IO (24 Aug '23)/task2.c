/*
Inventory Management System: Mr. Sakamoto from Convenience Delivery Store (CDS) of
Imperial University of Tokyo (IUT) is back. This time, he wants you to create a list of items in his shop. He will provide you item number, unit price and purchase date of the products available in CDS. He wants you to show the items in an organized manner. However, before finalizing the design he wants to see how the list will look like a single item. You must write a program that formats product information entered by the user.

A session with the program should look like this:
Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2019
Item  Price    Date
583   $13.50  10/24/2019
*/

#include <stdio.h>
int main()
{
    int item_num, date, month, yr;
    float price;
    printf("Enter item number : ");
    scanf("%d", &item_num);
    printf("\n\nEnter unit price : ");
    scanf("%f", &price);
    printf("\n\nEnter purchase date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &month, &date, &yr);
    printf("\n\nItem price\tDate\t\tUnit Purchase");
    printf("\n\n$ %3.2f\t\t%.2d/%.2d/%d\t%13d\n\n", price, month, date, yr, item_num);
    return 0;
}