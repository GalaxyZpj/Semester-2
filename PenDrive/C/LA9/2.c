#include <stdio.h>

int main()
{
  int n1;

  printf("Enter a number: ");
  scanf("%d", &n1);

  if (n1%2 == 0) {
    printf("Given number is even.\n");
  }
  else {
    printf("Given number is odd.\n");
  }

  return 0;
}
