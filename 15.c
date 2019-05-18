#include <stdio.h>

int i, j, a, b, x=0;

void perf_num(int n) {
  for(i=1; i<n; i++) {
    if(n%i==0) {
      x = x + i;
    }
  }
  if(n==x) {
    printf("%d ", n);
  }
  x=0;
}

int main() {
  printf("Enter the range: ");
  scanf("%d, %d", &a, &b);

  printf("Perfect numbers in the given range are: ");
  for(i=a; i<=b; i++) {
    perf_num(i);
  }
  printf("\n");
  return 0;
}
