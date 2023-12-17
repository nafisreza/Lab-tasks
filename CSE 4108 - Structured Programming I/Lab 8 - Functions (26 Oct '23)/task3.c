/*
3. Pyramid Scheme:
Write a C program that permits the user to specify a number of lines and then
prints a pyramid consisting of stars. You have to write a function that takes the number
of lines as a parameter. The pyramid must be centered.
*/

#include <stdio.h>

void pyramid(int n){
    int row,col;
    for(row = 1; row<=n; row++){
        
        for(col=1;col<=n-row;col++) printf(" ");

            for(col=1; col<=2*row-1;col++) printf("*");

            printf("\n");
        }
    }

int main() {
    pyramid(5);
}