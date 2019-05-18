#include <stdio.h>

int main()
{
  int n, i, nterms;

  printf("Enter the number of terms to be put in an array: ");
  scanf("%d", &nterms);
  n = nterms-1;
  int arr[n];

  for(i=0; i<=n; i++) {
    printf("Enter the %dth element: ", i+1);
    scanf("%d", &arr[i]);
  }

  printf("The elements in reverse order are:\n");

  for(i=n; i>=0; i--) {
    printf("%d\n", arr[i]);
  }

  return 0;
}
