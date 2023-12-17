/*
5. Anagrams:
Write a program that tests whether two words are anagrams (permutations of the same letters).

Sample input:
Enter first word: smartest
Enter second word: mattress
Sample output:
The words are anagrams.

Sample input:
Enter first word: dumbest
Enter second word: stumble
Sample output:
The words are not anagrams.
*/

#include <stdio.h>
#include <string.h>

int areAnagrams(char word1[], char word2[]);

int main() {
    char firstWord[100], secondWord[100];

    // Input for the first word
    printf("Enter first word: ");
    scanf("%s", firstWord);

    // Input for the second word
    printf("Enter second word: ");
    scanf("%s", secondWord);

    // Check if the words are anagrams
    if (areAnagrams(firstWord, secondWord)) {
        printf("The words are anagrams.\n");
    } else {
        printf("The words are not anagrams.\n");
    }

    return 0;
}

int areAnagrams(char word1[], char word2[]) {
    int len1 = strlen(word1);
    int len2 = strlen(word2);

    // If the lengths are different, the words cannot be anagrams
    if (len1 != len2) {
        return 0;
    }

    // Sort both words
    for (int i = 0; i < len1 - 1; i++) {
        for (int j = 0; j < len1 - i - 1; j++) {
            if (word1[j] > word1[j + 1]) {
                // Swap characters in the first word
                char temp = word1[j];
                word1[j] = word1[j + 1];
                word1[j + 1] = temp;
            }
            if (word2[j] > word2[j + 1]) {
                // Swap characters in the second word
                char temp = word2[j];
                word2[j] = word2[j + 1];
                word2[j + 1] = temp;
            }
        }
    }

    // Compare sorted words
    for (int i = 0; i < len1; i++) {
        if (word1[i] != word2[i]) {
            return 0; // Not anagrams
        }
    }

    return 1; // Anagrams
}
