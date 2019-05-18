#include <stdio.h>

int main()
{
  int n, nterms, x=0, i;
    printf("Enter the size of array: ");
    scanf("%d", &nterms);

    n = nterms - 1;

    int ar[n];

    for(i=1; i<=n; i++) {
        printf("Enter element no. %d", i+1);
        scanf("%d", &ar[i]);
        x = x + ar[i];
    }
    printf("The sum of the elements of the array is %d", x);
}

  return 0;
}

