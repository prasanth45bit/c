#include<stdio.h>
#include<string.h>
void rev(char *str1)
{
    int i,len,temp;
    len=strlen(str1);
    for(i=0;i<len/2;i++)
    {
        temp=str1[i];
        str1[i]=str1[len-i-1];
        str1[len -i-1]=temp;
        
    }
}
int main()
{
    char str[50];
    printf("Enter the string:");
    scanf("%s",str);
    rev(str);
    printf("\n Reversed string:");
    printf("%s",str);
}
