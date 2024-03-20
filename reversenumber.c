#include<stdio.h>
int main()
{
  char num[1000];
  printf("enter the number:");
  scanf("%[^\n]s",&num);
  int len=0;
  while(num[len]!='\0')
    {
        len++;
    }
    for(int i=len;i>=0;i--)
    {
        printf("%c",num[i]);
    }
}
