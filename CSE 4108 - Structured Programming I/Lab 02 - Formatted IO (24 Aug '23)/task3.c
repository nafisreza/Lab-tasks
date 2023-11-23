/*
3. Code of ISBN:
Books are identified by an International Standard Book Number (ISBN). ISBNs assigned after January 1, 2007 contain 13 digits, arranged in five groups, such as 978-0-393-97950-3. (Older ISBNs use 10 digits).
The first group (the GS1 prefix) is currently either 978 or 979. The group identifier specifies the language or country of origin (for example, 0 and 1 are used in English speaking countries). The publisher code identifies the publisher. The item number is assigned by the publisher to identify a specific book. An ISBN ends with a check digit that’s used to verify the accuracy of the preceding digits. Write a program that breaks down an ISBN entered by the user.

Sample Run:
Enter ISBN: 978-3-16-148410-0
GS1 prefix: 978
Group Identifier: 3
Publisher code: 16
Item number: 148410
Check digit: 0

The number of digits in each group may vary; you can’t assume that groups have the lengths shown in this example. Test your program with actual ISBN values (usually found on the back cover of a book and on the copyright page)
*/

#include <stdio.h>
int main()
{
    int gs1, GI, PC, In, cd;
    printf("Enter ISBN : ");
    scanf("%d-%d-%d-%d-%d", &gs1, &GI, &PC, &In, &cd);
    printf("\n\nGSl prefix : %d", gs1);
    printf("\nGroup Identifier : %d", GI);
    printf("\nPublisher Code : %d", PC);
    printf("\nItem Number : %d", In);
    printf("\nCheck Digit : %d\n\n", cd);
    return 0;
}