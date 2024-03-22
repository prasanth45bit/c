#include<stdio.h>
int fun(int num)
{
    int i,j;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    fun(num);
    return 0;
}
