#include <stdio.h>
#include <string.h>

int main()
{
  int i, j, counter, n;
  char string1[n];
  printf("Enter the string: ");
  gets(string1);
  n = strlen(string1);
  for(i=0; i<=n; i++) {
    for(j=i+1; j<=n; j++) {
      if(string1[i]==string1[j]) {
      counter++;
      }
    }
  }
  printf("%d\n", counter);

  return 0;
}
