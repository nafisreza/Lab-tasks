/*
4. Inventory management:
Write a program that keeps track of information for 10 items in a shop. Suppose the information stored for each item is given as:
(int productID, char* name, double unitPrice, int stockQuantity)
In separate lines, print the productID and name for those items which are still in stock and whose price is less than $100.
*/

#include <stdio.h>
#include <string.h>

struct Item {
    int productID;
    char name[50];
    double unitPrice;
    int stockQuantity;
};

int main() {
    struct Item items[10];

    items[0] = (struct Item){101, "Item1", 50.0, 5};
    items[1] = (struct Item){102, "Item2", 120.0, 0};
    items[2] = (struct Item){103, "Item3", 80.0, 2};

    for (int i = 0; i < 10; i++) {
        if (items[i].stockQuantity > 0 && items[i].unitPrice < 100.0) {
            printf("ProductID: %d, Name: %s\n", items[i].productID, items[i].name);
        }
    }

    return 0;
}
