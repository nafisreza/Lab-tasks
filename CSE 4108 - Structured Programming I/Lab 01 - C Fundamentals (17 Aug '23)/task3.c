/*
Modify the program written in the TASK-2 so that it prompts the user to enter the radius of the sphere.
*/

#include <stdio.h>
int main()
{
    float r, pi, v;
    pi = 3.14159;
    printf("input the radius\t:");
    scanf("%f", &r);

    v = (4.0f / 3.0f) * pi * r * r * r;
    printf("Volume of the sphere is is %f", v);
    return 0;
}