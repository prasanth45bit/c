#include <stdio.h>
int main()
{
    int prime_count,num,i;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    while(prime_count != 5)
    {
        num++;
        int count=0;
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                count+=1;
            }
        }
        if(count==0)
        {
            printf("%d\n", num);
            prime_count++;
        }
    }
}
