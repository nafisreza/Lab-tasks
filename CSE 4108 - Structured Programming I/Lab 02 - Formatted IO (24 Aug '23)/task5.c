/*
Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns, and diagonals.

Sample Run:
Enter the numbers from 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

16 3 2 13
5 10 11 8
9 6 7 12
4 15 14 1

Output:
Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 3
*/

int main()
{
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, rs1, rs2, rs3, rs4;
    int c1, c2, c3, c4, d1, d2;
    printf("Enter the numbers from 1 to 16 in any order : \n\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16);
    printf("\n\t%d\t%d\t%d\t%d", a1, a2, a3, a4);
    printf("\n\t%d\t%d\t%d\t%d", a5, a6, a7, a8);
    printf("\n\t%d\t%d\t%d\t%d", a9, a10, a11, a12);
    printf("\n\t%d\t%d\t%d\t%d", a13, a14, a15, a16);
    rs1 = a1 + a2 + a3 + a4;
    rs2 = a5 + a6 + a7 + a8;
    rs3 = a9 + a10 + a11 + a12;
    rs4 = a13 + a14 + a15 + a16;
    c1 = a1 + a5 + a9 + a13;
    c2 = a2 + a6 + a10 + a14;
    c3 = a3 + a7 + a11 + a15;
    c4 = a4 + a8 + a12 + a16;
    d1 = a1 + a6 + a11 + a16;
    d2 = a4 + a7 + a10 + a13;
    printf("\n\nRow sums : %d %d %d %d", rs1, rs2, rs3, rs4);
    printf("\nColumn sums : %d %d %d %d", c1, c2, c3, c4);
    printf("\ndiagonal sums : %d %d\n\n\n", d1, d2);
    return 0;
}