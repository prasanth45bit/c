#include <stdio.h>
int main()
{
    int first=0,second=1,next;
    int last;
    printf("enter number of series:");
    scanf("%d",&last);
    for(int i=0;i<last;i++)
    {
        printf("%d,",first);
        next=first+second;
        first=next;
        second=first;
    }
    return 0;
}
