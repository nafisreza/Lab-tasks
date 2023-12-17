/*
5. Swap:
Write a program that contains the following function:
void swap (int *x, int *y);

The function will swap the values pointed by x and y. The main function will pass addresses of two variables which need to be swapped.
*/

#include <stdio.h>

void swap(int *x, int *y);
int main(){
    int x=5,y=10;
    swap(&x, &y);
    printf("x: %d, y: %d\n", x, y);
    return 0;
}

void swap(int *x, int *y){ 
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}