/*
Beaufort Scale:
Wind force is estimated by Beaufort Scale. Here’s a simplifiedversion of the scale:
Speed (knots)   Description
Less than 1     Calm
1-3             Light air
4-27            Breeze
28-47           Gate
48-63           Storm
Above 63        Hurricane
Write a program that asks the user to enter a wind speed (in knots), then displays the corresponding description.
*/

#include <stdio.h>

int main(void)
{
    int speed;
    printf("Enter wind speed: \n");
    scanf("%d", &speed);

    if(speed<1) printf("Calm");
    if(speed>=1 && speed<=3) printf("Light air");
    if(speed>=4 && speed<=27) printf("Breeze");
    if(speed>=28 && speed<=47) printf("Gate");
    if(speed>=48 && speed<=63) printf("Breeze");
    if(speed>63) printf("Hurricane");


    return 0;
}
