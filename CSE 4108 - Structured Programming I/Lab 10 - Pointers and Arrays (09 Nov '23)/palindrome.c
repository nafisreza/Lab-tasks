/*
1. Palindrome:
Write a program that reads a message, then checks whether it’s a palindrome
(the letters in the message are the same from left to right as from right to left).
Sample run:
Enter a message: A Man, A Plan, A Canal-Panama!
Palindrome
Enter a message: Madam, I am Adam.
Not a palindrome
Ignore all characters that aren’t letters.
Note: The program should use pointers instead of integers to keep track of positions in the array.
Note: You can simplify the program by taking advantage of the fact that an array name can be used as a pointer.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100], rev[100]=0, *p1, *p2;
    int i,j,l;
    p1 = &str;
    p2 = &rev;
    printf("Enter a string\n");
    gets(str);
    l = strlen(str);
    
    for(i=l-1,j=0;i>=0;i--,j++){
        *(p2+j) = *(p1+i);
    }
    
    if(strcmp(p1,p2)==0){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }

    return 0;
}