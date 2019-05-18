#include <stdio.h>

int main()
{
  int p, r, t, si;

  printf("%s", "Enter P, R, T seperated by a comma(,): ");
  scanf("%d, %d, %d", &p, &r, &t);

  si = p*(1+r*t);

  printf("%s%d%s", "The Simple Interest is ", si, ".");

  return 0;
}
