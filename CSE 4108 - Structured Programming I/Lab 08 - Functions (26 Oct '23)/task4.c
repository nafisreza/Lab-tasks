/*
4. Find the one!:
You are given a 5 × 5 matrix. All the values of the matrix are zeros except one.
For example,
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
The different value is always 1.
Your task is to find out the position of that value “1” inside the matrix. Write a Function
that will take the matrix as a parameter and return the position of the “1”.
*/

#include <stdio.h>

void positionOfOne(int arr[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(arr[i][j] == 1){
                printf("The position of one is row %d and column %d", i+1, j+1);
                break;
            }
        }
    }
}

int main()
{
    int arr[5][5];
    printf("Enter your matrix\n");
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    positionOfOne(arr);

    return 0;
}