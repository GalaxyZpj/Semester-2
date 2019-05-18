#include <stdio.h>

int main()
{
  int b, h;
  float a;

  printf("%s", "Enter Base and Height of triangle seperated by a comma(,): ");
  scanf("%d, %d", &b, &h);

  a = 0.5*b*h;

  printf("%s%f%s", "The area of the triangle is ", a, ".");

  return 0;
}
