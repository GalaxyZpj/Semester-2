#include <stdio.h>

int i, n, x=0;

int sum_n(int n) {
  for(i=1; i<=n; i++) {
    x = x + i;
  }
  return(x);
}

void main() {
  printf("Enter the number n: ");
  scanf("%d", &n);
  printf("The sum is %d\n", sum_n(n));
}
