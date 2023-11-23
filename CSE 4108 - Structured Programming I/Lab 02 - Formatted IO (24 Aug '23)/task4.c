/*
Write a program that prompts the user to enter a telephone number in the form (xxx)xxx-xxxx and then displays the number in the form xxx.xxx.xxxx.

Sample Run:
Enter phone number [(xxx) xxx-xxxx]: (404)817 - 6900
You entered 404.817.6900
*/

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter phone number : [(xxx)xxx-xxxx] : ");
    scanf("(%d)%d-%d", &a, &b, &c);
    printf("\n\nYou entered %d.%d.%d\n\n", a, b, c);
    return 0;
}