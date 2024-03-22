#include<stdio.h>
int sum(int num)
{
    int sum1=0;
    for(int i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            sum1=sum1+i;
        }
    }
    return sum1;
}
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int sum2=sum(num);
    printf("Sum of even number :%d",sum2);
}

