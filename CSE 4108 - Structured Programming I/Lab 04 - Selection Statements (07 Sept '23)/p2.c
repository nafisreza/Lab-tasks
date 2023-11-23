/*
Time Converter:
Write a program that asks the user for a 24-hour time, then displays the time in 12-hour form:
Enter a 24-hour time: 21 : 11
Equivalent 12-hour time: 9:11 PM
Be careful not to display 12 : 00 as 0 : 00.
*/
#include <stdio.h>

int main(void)
{
    int t1,t2;
    printf("Enter a 24-hour time: \n");
    scanf("%d:%d",&t1,&t2);

    if(t1<=12) t1=t1;
    if(t1>12 || t1<=24) t1-=12;

    printf("Equivalent 12-hour time: %d:%02d",t1,t2);


    return 0;
}
