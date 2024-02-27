#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random password
void generatePassword(int length) {
    // Define characters to include in the password
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+=<>?";

    // Calculate the length of the charset
    int charsetLength = sizeof(charset) - 1;

    // Seed the random number generator
    srand((unsigned int)time(NULL));

    // Generate the password
    for (int i = 0; i < length; ++i) {
        int index = rand() % charsetLength;
        printf("%c", charset[index]);
    }

    printf("\n");
}

int main() {
    int length;

    // Get desired password length from the user
    printf("Enter the length of the password: ");
    scanf("%d", &length);

    // Check if the length is valid
    if (length <= 0) {
        printf("Invalid password length\n");
        return 1;
    }

    // Generate and print the password
    generatePassword(length);

    return 0;
}
