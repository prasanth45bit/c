#include<stdio.h>
int main()
{
int num = 7;
int isPrime = 1;
for(int i = 2; i <= num / 2; i++) {
    if(num % i == 0) {
        isPrime = 0;
        break;
    }
}
printf("%d is %sprime", num, isPrime ? "" : "not ");
}
