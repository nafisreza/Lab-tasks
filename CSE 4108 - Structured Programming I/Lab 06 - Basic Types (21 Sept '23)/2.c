/*
2. Scrabbler:
In the Scrabble Crossword Game, players form words using small tiles, each containing a letter and a face value. The face value varies from one letter to another, based on the letter’s rarity. 
The face values are:
1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.
Write a program that computes the value of a word by summing the values of its letters.
Sample run:
Enter a word: pitfall
Scrabble value: 12
Your program should allow any mixture of lower-case and upper-case letters in the word.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char input;
    int value = 0;
    printf("Enter your word.");

     while((input = getchar()) != '\n') {

        switch (toupper(input)) {
            case 'A': case 'E': case 'I': case 'L': case 'N':
            case 'O': case 'R': case 'S': case 'T': case 'U':
                   value += 1;
                   break;
            case 'D': case 'G':
                   value += 2;
                   break;
            case 'B': case 'C': case 'M': case 'P':
                   value += 3;
                   break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                   value += 4;
                   break;
            case 'K':
                   value += 5;
                   break;
            case 'J': case 'X':
                   value += 8;
                   break;
            case 'Q': case 'Z':
                   value += 10;
                   break;
        }
    }

    printf("Scrabble value: %d\n\n", value);

    return 0;
}
