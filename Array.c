#include <stdio.h>
int main() 
{
    int numbers[5];
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &numbers[i]);
    }
    printf("Elements of the array are: ");
    for (int i = 0; i < 5; ++i) 
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}
