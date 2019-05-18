#include <stdio.h>

int main()
{
  int i, j, n, x, y, f=0;

  printf("The matrix is displayed below :-\n");

  int m[4][4] = {
                {1, 2, 3, 4},
                {5, 5, 0, 2},
                {4, 1, 8, 3},
                {5, 9, 3, 4},
                };
  for(i=0; i<4; i++) {
    for(j=0; j<4; j++) {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }

  printf("Enter the size of matrix: ");
  scanf("%d", &n);

  int m_in[n][n];

  printf("\n");

  printf("Enter the elements of matrix: \n");

  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      scanf("%d", &m_in[i][j]);
    }
  }
  printf("The entered matrix is: \n");
  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      printf("%d ", m_in[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  for(i=0,x=0; i<4,x<n; i++,x++) {
    for(j=0,y=0; j<4,y<n; j++,y++) {
      if(m[i][j]==m_in[x][y]) {
        f++;
      }
    }
  }

  if(f==n*n){
    printf("The following matrix exists in the given matrix.\n");
  }
  else {
  printf("The following matrix doesnot exist in the given matrix.\n");
  }

  return 0;
}
