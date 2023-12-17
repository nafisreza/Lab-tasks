/*
1. Built in Functions?:
You are given two strings a and b, separated by a new line. Each string will consist of lower case Latin characters (&#39;a&#39;-&#39;z&#39;). In the first line of the output, print two space-separated integers, representing the length of a and b respectively. In the second line of the output, print the string produced by concatenating a and b, means (a+b). In the third line of output, print two strings separated by a space, a’ and b’. a’ and b’ are the same as a and b, respectively, except that their first characters are swapped. Length of a and b will not exceed 200 characters. If the concatenated string length exceeds 200 characters, produce an error message that says, “Buffer overflow”.

Sample Input:
Linkin
Park
Sample Output:
6 4
LinkinPark
Pinkin Lark

***Note: You can’t use any built-in functions for this problem.***
*/

#include <stdio.h>

int strlen(const char *str) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}

void concatenateStrings(char *result, const char *str1, const char *str2) {
    int i, j;

    for (i = 0; str1[i] != '\0'; i++) {
        result[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; j++) {
        result[i + j] = str2[j];
    }

    result[i + j] = '\0';
}


int main() {
    char a[201], b[201], result[201];
    
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    int len_a = strlen(a);
    int len_b = strlen(b);
    printf("%d %d \n", len_a, len_b);

    if (len_a + len_b <= 200) {
        concatenateStrings(result,a,b);
    } else {
        printf("Buffer overflow\n");
    }

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s\n", a, b);

    return 0;
}
