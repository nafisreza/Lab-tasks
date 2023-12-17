/*
2. Position through Pointers:
Modify the maxmin.c (Page 249 - Section 11.4) program so that the max_min function uses a pointer instead of an integer to keep track of the current position in the array. Output the position of the max and min value in the array instead of the values themselves. Positions are calculated from 1 to n.
Sample Run:
Enter 10 Numbers: 34 82 49 102 7 94 23 11 50 31
Max Position: 4
Min Position: 5
*/

#include <stdio.h>

void max_min(int a[], int n, int *max_pos, int *min_pos);

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int max_pos, min_pos;

    // Call the max_min function
    max_min(numbers, n, &max_pos, &min_pos);

    printf("Max Position: %d\n", max_pos + 1); // Adding 1 to convert from 0-based index to 1-based index
    printf("Min Position: %d\n", min_pos + 1); // Adding 1 to convert from 0-based index to 1-based index

    return 0;
}

void max_min(int a[], int n, int *max_pos, int *min_pos) {
    *max_pos = *min_pos = 0; // Initialize positions

    for (int i = 1; i < n; i++) {
        if (a[i] > a[*max_pos]) {
            *max_pos = i;
        } else if (a[i] < a[*min_pos]) {
            *min_pos = i;
        }
    }
}
