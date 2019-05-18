#include <stdio.h>
int n;
void fact_upon_num(int n) {
  int i, f=1;
  float x, fx=0;

    for(i=n; i>0; --i) {
      f = f * i;
    }
    x = f/n;
    fx = fx + x;


  printf("%f\n", fx);
}

int main() {
  printf("Enter the number n: ");
  scanf("%d", &n);
  fact_upon_num(n);
  return 0;
}
