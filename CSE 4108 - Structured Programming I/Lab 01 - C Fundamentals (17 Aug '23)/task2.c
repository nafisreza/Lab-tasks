/*

2. Volume of a Sphere:
The volume of a sphere is calculated by:
𝑉 = 4/3 pie * r^3 where r is the radius of the sphere.
Write a C program that computes the volume of a sphere with a 20-meter diameter. Use 𝜋= 3.14159.
Hint:
● Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What happens then?) 
● C doesn’t have an exponentiation operator, so you’ll need 
to multiply r by itself twice to compute 𝑟

*/

#include<stdio.h>
int main()
{
float diameter, r,pi,v;
diameter = 20;
pi = 3.14159;
r = diameter / 2 ;
v = (4/3)*pi*r*r*r;
printf ("Volume is %.2f",v);
return 0;
}