/*
Modify the program of the last task so that the polynomial is evaluated using the following formula:
                                ((((3𝑥 + 2)𝑥 − 5)𝑥 − 1)𝑥 + 7)𝑥 − 6
Note that the modified program performs fewer multiplications. This technique for evaluating polynomials is known as Horner’s Rule
*/

#include <stdio.h>
#include <math.h>
int main()
{
    float x, ans;
    printf("please input the value of the x :\t");
    scanf("%f", &x);
    ans = (((((3 * x) + 2) * x - 5) * x + 1) * x + 7) * x - 6;
    printf("the answer is = %f", ans);
    return 0;
}