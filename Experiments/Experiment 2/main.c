#include <stdio.h>
#include <ctype.h>

// Function to encrypt plaintext using Caesar cipher
void encrypt(char* plaintext, int key) {
    int i = 0;

    while (plaintext[i]) {
        if (isalpha(plaintext[i])) {
            char charCase = isupper(plaintext[i]) ? 'A' : 'a';
            char charIndex = plaintext[i] - charCase;
            char encryptedChar = (charIndex - key) % 26;
            if (encryptedChar < 0) {
                encryptedChar += 26;
            }
            plaintext[i] = encryptedChar + charCase;
        }
        i++;
    }

    printf("Ciphertext: %s\n", plaintext);
}

int main() {
    char plaintext[1000];
    int key = 3; // Set the key to 3 for encryption

    printf("Enter plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);

    encrypt(plaintext, key);

    return 0;
}







