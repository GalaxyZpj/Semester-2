#include <stdio.h>

int main()
{
  int i, j, n, nterms, d=0;

  printf("Enter the size of array: ");
  scanf("%d", &nterms);

  n = nterms-1;

  int a[n];

  for(i=0; i<=n; i++) {
    printf("Enter the %dth element: ", i+1);
    scanf("%d", &a[i]);
  }

  for(i=0; i<=n; i++) {
    for(j=0; j<=n && j!=i; j++) {
      if(a[i]==a[j]) {
        d++;
        break;
      }
    }
  }

  printf("There are %d duplicate elements in the array.\n", d);


  return 0;
}
