 #include <stdio.h>
int mat1[][]; mat2[][], i, j;
void main() {
  printf("Enter the elements of the first matrix one by one: ");
  for(i=0; i<3; i++) {
    for(j=0; j<3; j++) {
      scanf("%d", &mat1[i][j]);
    }
  }

  printf("Enter the elements of the second matrix one by one: ");
  for(i=0; i<3; i++) {
    for(j=0; j<3; j++) {
      scanf("%d", &mat2[i][j]);
    }
  }

  printf("The first matrix is: ");
  for(i=0; i<3; i++) {
    for(j=0; j<3; j++) {
      printf("%d", mat1[i][j]);
    }
  }

  printf("The first matrix is: ");
  for(i=0; i<3; i++) {
    for(j=0; j<3; j++) {
      printf("%d", mat2[i][j]);
    }
  }

  
}
