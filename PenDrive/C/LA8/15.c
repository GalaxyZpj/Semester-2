#include <stdio.h>
#include <stdlib.h>


int main()
{
  int n1, n2, n3, nmax;

  printf("%s", "Enter the three numbers seperated by a comma(,):");
  scanf("%d, %d, %d", &n1, &n2, &n3);

  nmax = min(n1, n2, n3);

  printf("%s%d%s", "The maximum of the three numbers is ", nmax, ".");

  return 0;
}
