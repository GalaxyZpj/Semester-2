#include <stdio.h>

int main()
{
  int n1;

  printf("Enter a number: ");
  scanf("%d", &n1);

  if (n1 < 0) {
    printf("The number is negative.\n");
  }
  else {
    printf("The number is positive.\n");
  }

  return 0;
}
