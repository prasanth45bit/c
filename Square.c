#include <stdio.h>
int main() {
    int inputValue;
    printf("Enter a number: ");
    scanf("%d", &inputValue);
    int square = inputValue * inputValue;
    printf("The square of %d is: %d\n", inputValue, square);
    return 0;
}
