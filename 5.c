#include <stdio.h>
int i=0;
int naturalSum(int n) {

  if(n != 0)
         return n + naturalSum(n-1);
     else
         return n;
}

void main() {
  int n;
  printf("Enter the value of N: ");
  scanf("%d", &n);

  printf("The sum of the series is %d\n", naturalSum(n));
}
