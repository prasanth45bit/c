#include <stdio.h>
int main() {
    long long number;
    printf("Enter a number with more than 6 digits: ");
    scanf("%lld", &number);
   if (number >= 1000000)
   {
        int last_digit = number % 10;
        number /= 10;
        int new_last_digit;
        printf("Enter the new last digit: ");
        scanf("%d", &new_last_digit);
        number = number * 10 + new_last_digit;
        printf("Result: %lld\n", number);
    }
   else 
   {
        printf("Please enter a valid number with more than 6 digits.\n");
    }
    return 0;
}
