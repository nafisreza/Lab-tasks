/*
2. You are given a string 's' of lowercase English letters (without any space)
and an array of 26 integers called 'widths' denoting how many pixels wide
each lowercase English letter is. Specifically, widths[0] is the width of 'a',
widths[1] is the width of 'b', and so on.

You are trying to write 's' across several lines, where each line is no longer
than pixels. Starting at the beginning of 's', write as many letters on the first
line such that the total width does not exceed pixels. Then, from where you
stopped in 's', continue writing as many letters as you can on the second
line. Continue this process until you have written all of 's'.

Your task is to output two variables:
res_1 is the total number of lines.
res_2 is the width of the last line in pixels.

Input: 
s = "abcdefghijklmnopqrstuvwxyz"
widths= [10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10]
Output: 
3,60
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[] = "vicissitude";
    int widths[] = {5,5,5,5,5,5,5,5,5,5,5,5,5,10,10,10,10,10,10,10,10,10,10,10,10,10};
    int width = 0;
    int lines = 1;

     for (int i = 0; i < strlen(s); i++) {
        int charWidth = widths[s[i] - 'a'];
        if (width + charWidth > 100) {
            lines++;
            width = 0;
        }
        width += charWidth;
    }

    printf("Output: %d,%d", lines, width);
    return 0;
}