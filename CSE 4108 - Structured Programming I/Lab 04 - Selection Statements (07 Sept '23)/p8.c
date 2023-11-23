/*
Write a program that prompts the user to enter two dates and then indicates which date comes earlier on the calendar.
Sample run:
Enter first date (mm/dd/yy): 12/21/19
Enter second date (mm/dd/yy): 2/16/20
Output: 12/21/19 is earlier than 2/16/20
*/

#include <stdio.h>

int main()
{
    int y1, y2, m1, m2, d1, d2, prev;
    printf("Enter first date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    printf("\n\nEnter second date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &m2, &d2, &y2);
    if (y1 > y2)
    {
        prev = 1;
    }
    else if (y1 == y2)
    {
        if (m1 > m2)
        {
            prev = 1;
        }
        else if (m1 == m2)
        {
            if (d1 > d2)
            {
                prev = 1;
            }
            else if (d1 == d2)
            {
                printf("same date");
            }
            else
            {
                prev = 0;
            }
        }
        else
        {
            prev = 0;
        }
    }
    else
    {
        prev = 0;
    }
    printf("\n\n\n");
    if (prev == 1)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d", m2, d2, y2, m1, d1, y1);
    }
    else if (prev == 0)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d", m1, d1, y1, m2, d2, y2);
    }
    else
    {
        printf("wrong input");
    }
    printf("\n\n\n");
    return 0;
}