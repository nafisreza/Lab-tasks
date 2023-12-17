/*
3. Binary to Decimal:
Write a program in C to convert a binary number into decimal using recursion.
*/

#include<stdio.h>
int binaryToDecimal(int n)
{
    if(n==0)
        return 0;
    else
        return (n % 10 + 2 * binaryToDecimal(n / 10));
}
int main()
{
    int n;
    printf("Enter the Binary Value:");
    scanf("%d",&n);
    printf("Decimal Value of Binary number is: %d",BinaryToDecimal(n));
}