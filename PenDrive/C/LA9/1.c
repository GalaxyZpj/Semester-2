#include <stdio.h>

int main()
{
  int n1, n2;

  printf("Enter first number: ");
  scanf("%d", &n1);

  printf("Enter second number: ");
  scanf("%d", &n2);

  if (n1 == n2) {
    printf("The numbers are equal.\n");
  }

  else {
    printf("The numbers are not equal.\n");
  }

  return 0;
}
