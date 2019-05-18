#include <stdio.h>

int main()
{
  int m, n;

  printf("Enter value of m: ");
  scanf("%d", &m);

  if (m > 0) {
    n = 1;
    printf("%s%d", "The value of n is ", n);
  }
  else if (m < 0) {
    n = -1;
    printf("%s%d", "The value of n is ", n);
  }
  else if (m == 0) {
    n = 0;
    printf("%s%d", "The value of n is ", n);
  }

  return 0;
}
