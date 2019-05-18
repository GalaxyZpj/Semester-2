#include <stdio.h>

int main()
{
  int i, n, nterms;

  printf("Enter the size of array: ");
  scanf("%d", &nterms);

  n = nterms-1;

  int a1[n], a2[n];

  for(i=0; i<=n; i++) {
    printf("Enter value for the %dth element: ", i+1);
    scanf("%d", &a1[i]);
    a2[i] = a1[i];
  }

  printf("The second array is as follows:\n");

  for(i=0; i<=n; i++) {
    printf("%d\n", a2[i]);

  }



  return 0;
}
