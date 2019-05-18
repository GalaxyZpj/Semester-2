#include <stdio.h>
int n=1, p;
int power_n(int n, int p) {
  if(p==1) {
    return(n);
  }
  else {
    return(n) * power_n(n, p-1);
  }

}

int main() {
  printf("Enter the number with the power seperated by comma: ");
  scanf("%d, %d", &n, &p);
  printf("The number is %d.\n", power_n(n, p));
  return 0;
}
