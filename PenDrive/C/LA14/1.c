#include <stdio.h>
int a, b, x;
void checkprime(n) {
    int i, j, f=0;
    for(i=1; i<=n; i++) {
        if(n%i==0) {
            f++;
        }
    }
    if(f==2) {
        printf("%d ", n);
    }

}

void main() {
    printf("Enter the range: ");
    scanf("%d %d", &a, &b);
    for(x=a; x<b; x++) {
        checkprime(x);
    }
}

