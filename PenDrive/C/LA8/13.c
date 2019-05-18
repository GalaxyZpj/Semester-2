#include <stdio.h>

int main()
{
  int m;
  float f;

  printf("%s", "Enter minutes which are to be converted into hours: ");
  scanf("%d", &m);

  f = m/60;

  printf("%d%s%f%s", m, " minutes equals ", f, " hours." );

  return 0;
}
