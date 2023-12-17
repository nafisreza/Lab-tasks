/*
1. toUpper() and beyond!:
We all know about the toupper() function from the ctype.h library, which converts a lowercase letter to an uppercase letter.
i. Write a function void read_string(char ch[], int length) that will
read the input string.
ii. Write a function char to_uppercase(char ch) that will return a character
in uppercase letter.
iii. Write a function void print_string(char ch[], int length) that
will print the whole string in uppercase.

**DON’T USE THE BUILT-IN toupper() function.**
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void read_string(char ch[], int length){
    int i = 0;
    scanf("%s", ch);
}

void to_uppercase(char ch){
    if(ch>='a' && ch<='z'){
        printf(ch - 32);
    }
    return ch;
}

void print_string(char ch[], int length){
    for(int i=0; i<length; i++){
        printf("%c", to_uppercase(ch[i]));
    }
}

int main(){
    int length;
    char input[length];

    scanf("%d", &length);
    read_string(input, length);
    print_string(input, length);
}