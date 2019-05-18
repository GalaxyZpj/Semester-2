#include <stdio.h>

int i, n, f=1;

void fact_n(int n) {
  for(i=n; i>0; --i) {
    f = f*i;
  }
  printf("The factorial of the number is %d\n", f);
}

void main() {
  printf("Enter the number: ");
  scanf("%d", &n);
  fact_n(n);
}
