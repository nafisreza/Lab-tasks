/*
Modify the program of the last task so that the polynomial is evaluated using the following formula:
                                    3x^5 + 2x^4 − 5x^3 − x^2 + 6x − 6
*/

#include <stdio.h>>
int main()
{
    float x, ans;
    printf("please input the value of the x :\t");
    scanf("%f", &x);
    ans = (3.0f * x * x * x * x * x) + (2.0f * x * x * x * x) - (5.0f * x * x * x) - (x * x) + (7.0 * x) - 6;
    printf("the answer is = %f", ans);
    return 0;
}
