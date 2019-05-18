#include <stdio.h>

int main()
{
    int i, j, n, nterms;
    int x=0, y=0, z=0, u=0, v=0, w=0;
    int a[3][3];

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("Enter the element for %d row and %d column: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("The following matrix is:\n");

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d", a[i][j]);
        }
        printf(" \n");
    }

    for(j=0; j<3; j++) {
        x = x + a[0][j];
        y = y + a[1][j];
        z = z + a[2][j];
    }
    for(i=0; i<3; i++) {
        u = u + a[i][0];
        v = v + a[i][1];
        w = w + a[i][2];
    }



    for(i=1; i<4; i++) {

        printf("The sum of row no. %d is %d\n", i, x);
        x=y;
    }



    return 0;
}

