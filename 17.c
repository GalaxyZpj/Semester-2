#include <stdio.h>

int i, n, arr[];

void fib(int n) {
  int arr[n];
  arr[0] = 0;
  arr[1] = 1;
  for(i=2; i<=n+1; i++) {
    arr[i] = arr[i-1] + arr[i-2];
    printf("%d, ", arr[i-2]);
  }
}

void main() {
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  fib(n);
  printf("\n");
}
