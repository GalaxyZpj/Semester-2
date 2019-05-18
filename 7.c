#include <stdio.h>

int gcd(int a, int b) {
  int fac_a[a], fac_b[b], i;
  for(i=0; i<a; i++) {
    if(a%i+1==0) {
      fac_a[i] = i+1;
    }
  }
  for(i=0; i<b; i++) {
    if(b%i+1==0) {
      fac_b[i] = i+1;
    }
  }

  for(i=0; i<a; i++) {
    printf("%d", fac_a[i]);
  }
}

void main() {
  gcd(25, 50);
}
