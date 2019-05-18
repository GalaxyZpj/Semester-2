#include <stdio.h>
#include <string.h>

int main()
{ int n=20;
  char s1[n], s2[n];
  printf("Enter first string: ");
  gets(s1);
  printf("Enter second string: ");
  gets(s2);

  strcat(s1, s2);

  puts(s1);

  return 0;
}
