#include <stdio.h>

int main() {
    long long number;

    // Get user input for a number with more than 6 digits
    printf("Enter a number with more than 6 digits: ");
    scanf("%lld", &number);

    // Check if the input is valid
    if (number >= 1000000) {
        // Extract the last digit
        int last_digit = number % 10;

        // Remove the last digit
        number /= 10;

        // Get user input for the new last digit
        int new_last_digit;
        printf("Enter the new last digit: ");
        scanf("%d", &new_last_digit);

        // Attach the new last digit
        number = number * 10 + new_last_digit;

        printf("Result: %lld\n", number);
    } else {
        printf("Please enter a valid number with more than 6 digits.\n");
    }

    return 0;
}
