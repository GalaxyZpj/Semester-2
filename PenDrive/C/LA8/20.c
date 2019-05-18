#include <stdio.h>

int main()
{
  int cm;
  double m, km;

  printf("%s", "Enter length in centimeter: ");
  scanf("%d", &cm);

  m = cm/100;
  km = cm/100000;

  printf("%s%lf%s", "The length in metre is ", m, " m.");
  printf("%s%lf%s", "The length in kilometre is ", km, " km.");
  return 0;
}
