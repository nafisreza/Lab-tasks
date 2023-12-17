/*
5. Get Rid of Em:
Write a function that takes a string as its parameter and returns a modified string where all vowels have been eliminated. Note that there are 10 vowels: 
‘A’, ‘E’, ‘I’, ‘O’, ‘U’, ‘a’, ‘e’, ‘i’, ‘o’ and ‘u’.
Sample Run:
Enter a String: Don’t be negative, B positive.
Output: Dn’t b ngtv, B pstv.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    int i, j, len = 0;

    printf("Enter a string : ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            for (j = i; j < len; j++) {
                str[j] = str[j + 1];
            }
            i--;
            len--;
        }
        str[len + 1] = '\0';
    }
   printf("After deleting the vowels, the string will be : %s", str);
   return 0;
}