#include <stdio.h>
int a, b, i, m;

int lcm_num(int a, int b) {
  m = (a>b) ? a : b;
  while(1) {
    if(m%a==0 && m%b==0) {
      return(m);
    }
    ++m;
  }
}

void main() {
  printf("Enter the 2 numbers seperated by a comma: ");
  scanf("%d, %d", &a, &b);

  printf("The LCM of the two numbers is %d\n", lcm_num(a, b));
}
