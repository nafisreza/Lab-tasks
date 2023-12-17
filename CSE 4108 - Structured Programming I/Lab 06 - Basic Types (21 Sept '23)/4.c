/*
4. Vowels rush:
Write a program that counts the number of vowels (a, e, i, o, and u) in a sentence.
Sample run:
Enter a sentence: I think therefore I am.
Your sentence contains 8 vowels.
*/

#include <stdio.h>
int main()
{
  int c = 0, count = 0;
  char s[1000];
  printf("Input any word \n");
  gets(s);
  while (s[c] != '\0') {
    if (s[c] == 'a' ||
        s[c] == 'A' ||
        s[c] == 'e' ||
        s[c] == 'E' ||
        s[c] == 'i' ||
        s[c] == 'I' ||
        s[c] == 'o' ||
        s[c]=='O'   ||
        s[c] == 'u' ||
        s[c] == 'U'  )
        count++;
        c++;
  }
  printf("Number of vowels: %d", count);
  return 0;
}
