#include <stdio.h>
int main() 
{
    int numbers[5];
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &numbers[i]);
    }
    return 0;
}
