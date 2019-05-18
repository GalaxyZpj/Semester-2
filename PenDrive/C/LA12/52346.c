#include <stdio.h>

int main()
{
    int i, j, n, nterms, x=0;
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

    for(i=0; i<3; i++) {
        x = x + a[i][0];
    }

    printf("The sum of 1st row is %d", x);




    return 0;
}


