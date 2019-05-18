#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, j=1, f1=0, f2=0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(i=1; i<=n; ++i){
        while(j-i <= n) {

    if(n%i == 0) {
       f1++;
    if(j%i == 0) {
        f2++;
    }

    if(f1 == 2 && f2 == 2) {
       printf("%d + %d = %d", i + j == n);
    }

    }
    }
    }
    return 0;
}
