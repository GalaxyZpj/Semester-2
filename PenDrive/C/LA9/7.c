#include <stdio.h>

int main()
{
  int m, c, p, t3, tmp, tmc;

  printf("Enter marks obtained in Maths: ");
  scanf("%d", &m);

  printf("Enter marks obtained in Physics: ");
  scanf("%d", &p);

  printf("Enter marks obtained in Chemistry: ");
  scanf("%d", &c);

  t3 = m + c + p;
  tmp = m + p;
  tmc = m + c;


  if (m >= 65 && p >= 55 && c >= 50 && (t3 >= 180 || (tmc >=140 || tmp >= 140))) {
    printf("You are eligible to enrol for the course.\n");
  }
  else {
    printf("You are not eligible to enrol for the course.\n");
  }


  return 0;
}
