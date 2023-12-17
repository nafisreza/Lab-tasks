/*
4. Caesar Cypher:

One of the oldest known encryption techniques is the Caesar cipher, attributed to Julius Caesar. It involves replacing each letter in a message with another letter that is a fixed number of positions later in the alphabet. If the replacement would go past the letter Z, the cipher “wraps around” to the beginning of the alphabet. For example, if each letter is replaced by the letter two positions after it, then Y would be replaced by A, and Z would be replaced by B.
Write a program that encrypts a message using a Caesar cipher. The user will enter the message to be encrypted and the shift amount (the number of positions by which letters should be shifted).

Sample input:
Enter a message to be encrypted: Smile, it’s Sunnah
Enter shift amount (1-25): 3

Sample output:
Encrypted message: Vploh, lw’v Vxqqdk

## Notice that the program can decrypt a message if the user enters 26 minus the original key.

Sample input:
Enter message to be decrypted: Vploh, lw’v Vxqqdk
Enter shift amount (1-25): 23

Sample output:
Decrypted message: Smile, it’s Sunnah

You may assume that the message does not exceed 80 characters. Characters other than letters should be left unchanged. Lower-case letters remain lower-case when encrypted, and uppercase letters remain upper- case.
*/

#include <stdio.h>

void encrypt(char message[], int shift);
void decrypt(char message[], int shift);

int main() {
    char message[81];
    int shift;

    // Encryption
    printf("Enter a message to be encrypted: ");
    fgets(message, sizeof(message), stdin);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);
    encrypt(message, shift);
    printf("Encrypted message: %s\n", message);

    // Decryption
    printf("\nEnter message to be decrypted: ");
    getchar(); // Consume the newline character left by previous input
    fgets(message, sizeof(message), stdin);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);
    decrypt(message, shift);
    printf("Decrypted message: %s\n", message);

    return 0;
}

void encrypt(char message[], int shift) {
    for (int i = 0; message[i] != '\0'; i++) {
        if (message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = (message[i] - 'A' + shift) % 26 + 'A';
        } else if (message[i] >= 'a' && message[i] <= 'z') {
            message[i] = (message[i] - 'a' + shift) % 26 + 'a';
        }
    }
}

void decrypt(char message[], int shift) {
    // Decryption is just encryption with a negative shift
    encrypt(message, 26 - shift);
}
