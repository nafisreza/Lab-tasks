/*
2. Repeating Again:
Modify the “Repeat After Me” (Task-1) program so that the user can enter more than one number to be tested for repeated digits. The program should terminate when the user enters a number that’s less than or equal to 0.
*/

#include <stdio.h>
int main()
{
    int num;
    for (int j = 0;; j++)
    {
        printf("Enter the number: ");
        scanf("%d", &num);
        if (num <= 0)
        {
            break;
        }
        int count[10] = {0};
        while (num != 0)
        {
            int rem = num % 10;
            count[rem]++;
            num /= 10;
        }

        printf("Repeated Digits: ");

        for (int i = 0; i < 10; i++)
        {
            if (count[i] > 1)
                printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
