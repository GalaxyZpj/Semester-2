#include <stdio.h>
#include <stdlib.h>
int a, b, c, x, y, z, xt1=1, xt2=1, sum;
double f;
float final;
int pol_sol(int x, int y, int z, int a, int b, int c) {
  int i=1;
  while(i<=c) {
    xt1 = xt1*x;
    i++;
  }

  i=1;
  while(i<=b) {
    xt2 = xt2*x;
    i++;
  }

  sum = (xt1*xt2) + (y*y)*(z*z);


  f = sqrt(x*x + y*y*y + z*z);

  final = sum + f;

  return final;
}

int main() {

  printf("Following program outputs the value of the following polynomial function: \nf(x,y,z) = (x^c*x^b)+(y^2)(z^2)+sqrt(x^2+y^3+z^2) \n");

  printf("Enter the value of a, b, c, x, y, z, seperated by commas: ");
  scanf("%d, %d, %d, %d, %d, %d", &a, &b, &c, &x, &y, &z);

  printf("The value of expression is: %d\n", pol_sol(x, y, z, a, b, c));

  return 0;
}
