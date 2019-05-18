#include <stdio.h>

int main()
{
    int i, j, n, nterms, x;
    printf("Enter the no. of elements to be entered in an array: ");
    scanf("%d", &nterms);

    n = nterms-1;

    int a[n];

    for(i=0; i<=n; i++) {
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &a[i]);
    }

    for(i=0; i<=n; i++) {
        for(j=i+1; j<=n; j++) {
            if(a[i]>a[j]) {
                x = a[i];
                a[j] = a[i];
                a[i] = x;

            }
        }
    }

    printf("The sorted array is: \n");

    for(i=0; i<=n; i++) {
        printf("%d\n", a[i]);
    }



    return 0;
}

