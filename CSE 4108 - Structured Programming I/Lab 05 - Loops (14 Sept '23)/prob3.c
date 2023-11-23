/*
A lot to print:
Write a program that finds a bunch of things (number of inputs, sum, average, maximum, number of odd values)in a series of numbers entered by the user. The program must prompt the user to enter numbers one by one. When the user enters 0 or a negative number, the program will end and display the results.
*/

#include<stdio.h>
int main()
{
    int a, odd, max;
    odd = 0;
    max = 0;
    double i, sum;
    sum = 0;
    for(i = 0; 1; i++){
        printf("Enter a number: ");
        scanf("%d", &a);
        if(a == 0){
            break;
            }

        sum = sum + a;
        if(a%2!=0){
            odd = odd + 1;
            }

        if(a>max){
            max = a;
            }
        }
        double average = (sum/i);

        printf("The number of inputs is %0.0lf\n", i);
        printf("The sum of the input values is %0.0lf\n", sum);
        printf("The average of the input values is %0.2lf\n", average);
        printf("The number of odd values input is %d\n", odd);
        printf("The maximum value entered was %d\n", max);

        return 0;

}
