#include <stdio.h>

int main()
{
  int n1, n2;
  float a, s, m, d;

  printf("%s", "Enter the numbers seperated by a comma(,): ");
  scanf("%d, %d", &n1, &n2);

  a = n1+n2;
  s = n1-n2;
  m = n1*n2;
  d = n1/n2;

  printf("%s%f", "Addition = ", a);
  printf("%s%f", "\nSubtraction = ", s);
  printf("%s%f", "\nMultiplication = ", m);
  printf("%s%f", "\nDivision = ", d);
  return 0;
}
