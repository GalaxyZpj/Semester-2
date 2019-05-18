#include <stdio.h>

int i, m=0;

void largest_num(int a) {
  if(a>m) {
    m = a;
  }
}

int main() {
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements consecutively: ");
  for(i=0; i<n; i++) {
    scanf("%d", &arr[i]);
  }
  for(i=0; i<n; i++) {
    largest_num(arr[i]);
  }

    printf("The largest element is: %d\n", m);
    return 0;
}
