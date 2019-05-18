#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, i, j, x=0, y=0, diff;

  scanf("%d", &n);

  int arr[n][n];

  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {

      if(i==j){
        x = x + arr[i][j];
      }
      if(i == n-j-1) {
          y = y + arr[i][j];
        }
    }
  }

  diff = x - y;
  diff = abs(diff);

  printf("%d", diff);

    return 0;
}
