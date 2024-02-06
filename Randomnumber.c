#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int random_number;
    srand(time(NULL));
    random_number = rand();    
    printf("Random number: %d\n", random_number);    
    return 0;
}
