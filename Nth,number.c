#include <stdio.h>
int main() {
  int last;
  printf("enter last number:");
  scanf("%d",&last);
    for (int i = 1; i <= last; ++i) {
        printf("%d\n", i);
    }
    return 0;
}
