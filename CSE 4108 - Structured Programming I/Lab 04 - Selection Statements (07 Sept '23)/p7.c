/*
Welcome Aboard:
The following table shows the daily flights from one city to another:
....Check lab module for details!
*/

#include <stdio.h>
int main()
{
    int hr, min, conv_min, am_8, am_9_43, am_11_19, pm_12_47, pm_2, pm_3_45, pm_7, pm_9_45, am_12;
    printf("Enter a 24-hr time (hh:mm): ");
    scanf("%d:%d", &hr, &min);
    conv_min = hr * 60 + min;
    am_8 = 8 * 60;
    am_9_43 = 9 * 60 + 43;
    am_11_19 = 11 * 60 + 19;
    pm_12_47 = 12 * 60 + 47;
    pm_2 = 14 * 60;
    pm_3_45 = 15 * 60 + 45;
    pm_7 = 19 * 60;
    pm_9_45 = 21 * 60 + 45;
    am_12 = 23 * 60 + 59;
    if (conv_min >= 24 * 60 || conv_min <= 0)
        printf("Invalid hh:mm entry");
    else
    {
        printf("Closest departure time is: ");
        if (conv_min >= 1 && conv_min < am_8)
        {
            printf("8:00 am, arriving at 10:15 am");
        }
        if (conv_min >= am_8 && conv_min < am_9_43)
        {
            if (am_9_43 - conv_min < conv_min - am_8)
            {
                printf("9:43 am, arriving at 11:52 am");
            }
            else
            {
                printf("8:00 am, arriving at 10:15 am");
            }
        }
        if (conv_min >= am_9_43 && conv_min < am_11_19)
        {
            if (am_11_19 - conv_min < conv_min - am_9_43)
            {
                printf("11:19 am, arriving at 1:30 pm");
            }
            else
            {
                printf("9:43 am, arriving at 11:52 am");
            }
        }
        if (conv_min >= am_11_19 && conv_min < pm_12_47)
        {
            if (pm_12_47 - conv_min < conv_min - am_11_19)
            {
                printf("12:47 pm, arriving at 3:00 pm");
            }
            else
            {
                printf("11:19 am, arriving at 1:30 pm");
            }
        }
        if (conv_min >= pm_12_47 && conv_min < pm_2)
        {
            if (pm_2 - conv_min < conv_min - pm_12_47)
            {
                printf("2:00 pm, arriving at 4:08 pm");
            }
            else
            {
                printf("12:47 pm, arriving at 3:00 pm");
            }
        }
        if (conv_min >= pm_2 && conv_min < pm_3_45)
        {
            if (pm_3_45 - conv_min < conv_min - pm_2)
            {
                printf("3:45 pm, arriving at 5:55 pm");
            }
            else
            {
                printf("2:00 pm, arriving at 4:08 pm");
            }
        }
        if (conv_min >= pm_3_45 && conv_min < pm_7)
        {
            if (pm_7 - conv_min < conv_min - pm_3_45)
            {
                printf("7:00 pm, arriving at 9:20 pm");
            }
            else
            {
                printf("3:45 pm, arriving at 5:55 pm");
            }
        }
        if (conv_min >= pm_7 && conv_min < pm_9_45)
        {
            if (pm_9_45 - conv_min < conv_min - pm_7)
            {
                printf("9:45 pm, arriving at 11:58 pm");
            }
            else
            {
                printf("7:00 pm, arriving at 9:20 pm");
            }
        }
        if (conv_min >= pm_9_45 && conv_min <= am_12)
        {
            printf("9:45 pm, arriving 11:58 pm");
        }
    }
    printf("\n\n");
    return 0;
}