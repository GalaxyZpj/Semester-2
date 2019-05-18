#include <stdio.h>

int main()
{
  int i, j, k=0, m[3][3], m1d[9], a, sum5=0;

  for(i=0; i<3; i++) {
    for(j=0; j<3; j++) {
      scanf("%d", &m[i][j]);
      m1d[k] = m[i][j];
      k++;
    }
  }

  for(i=0; i<3; i++) {
    for(j=0; j<3; j++) {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }


  for(i=0; i<9; i++) {
  printf("%d ", m1d[i]);
}
  printf("\n\n\n");

for (i = 0; i < 9; ++i) {
    for (j = i + 1; j < 9; ++j) {
        if (m1d[i] < m1d[j]) {
            a = m1d[i];
            m1d[i] = m1d[j];
            m1d[j] = a;
        }
    }
}

for(i=0; i<9; i++) {
printf("%d \n", m1d[i]);
}

for(i=0; i<5; i++) {
  sum5 = sum5 + m1d[i];
}

printf("\n%d\n", sum5);

  return 0;
}
