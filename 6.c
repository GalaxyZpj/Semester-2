#include <stdio.h>

int factorial_n(int n) {
  if(n == 1) {
    return n;
  }
  else {
    return(n) * factorial_n(n-1);
  }
}
void main() {
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  printf("The factorial of the number is %d\n", factorial_n(n));
}
