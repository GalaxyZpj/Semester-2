#include <stdio.h>

int main()
{
    int i, j, n, nterms;
    int a[3][3], b[3][3], s[3][3];

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("Enter the element for %d row and %d column: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix a is:\n");

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d", a[i][j]);
        }
        printf(" \n");
    }

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("Enter the element for %d row and %d column: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }

      printf("Matrix b is:\n");

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d", b[i][j]);
        }
        printf(" \n");
    }



    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            s[i][j] = a[i][j]+b[i][j];
        }
    }

    printf("The final summed matrix is:\n");

      for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", s[i][j]);
        }
        printf(" \n");
    }





    return 0;
}

