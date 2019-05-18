#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct date {
int days;
int months;
int years;
}d1, d2, dt;

int main()
{
  printf("Enter the first date in the format DD/MM/YYYY: ");
  scanf("%d/%d/%d", &d1.days, &d1.months, &d1.years);
  printf("\n");
  printf("The entered date is: %d/%d/%d\n", d1.days, d1.months, d1.years);

  printf("Enter the second date in the format DD/MM/YYYY: ");
  scanf("%d/%d/%d", &d2.days, &d2.months, &d2.years);
  printf("\n");
  printf("The entered date is: %d/%d/%d\n", d2.days, d2.months, d2.years);

  dt.days = d1.days - d2.days;
  dt.days = abs(dt.days);

  printf("%d", dt.days);

  return 0;
}
