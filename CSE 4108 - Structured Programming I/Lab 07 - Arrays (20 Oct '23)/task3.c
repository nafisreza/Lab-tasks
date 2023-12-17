/*
3. B1FF Translator!:
You made a friend in the famous social network mySpace, named B1FF. He has a unique way of writing messages. The message length doesn’t exceed 100 characters.
Here’s a typical B1FF communiqué:
H3Y DUD3, C 15 C00L!!!!!!!!!!
Write a “B1FF translator” that reads a message entered by the user and translates it into B1ff-speak.

Sample input:
Enter message: Hey dude, C is cool
Sample output:
In B1FF-speak: H3Y DUD3, C 15 C00L!!!!!!!!!!

Your program should convert the message to upper-case letters, substitute digits for certain letters (A⇒4, B⇒8, E⇒3, I⇒1, O⇒0, S⇒5), and then append 10 exclamation marks.
*/

#include <stdio.h>
#include <ctype.h>
#define SIZE 100

int main()
{
    char c, message[SIZE] = {0};
    int i = 0;

    printf("Enter message: ");
    while(((c = getchar()) != '\n') && (i < SIZE)){
        message[i] = c;
        i++;
    }

    printf("In B1FF-speak: ");

    for (i = 0; i < SIZE; i++) {
        switch (c = toupper(message[i])) {
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
            case 'S':
                putchar('5');
                break;
            default:
                putchar(c);
                break;
        }
    }
    printf("!!!!!!!!!!\n");

    return 0;
}
