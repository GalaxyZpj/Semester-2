#include <stdio.h>
int p, arm;
void checkprime(n) {
    int i, j, f=0;
    for(i=1; i<=n; i++) {
        if(n%i==0) {
            f++;
        }
    }
    if(f==2) {
        printf("The number is prime.");
    }
    else {
        printf("The number is not prime.")
    }

}

void checkArm(arm) {

    if()
}

void main() {
    printf("Enter the range: ");
    scanf("%d", &p);
    checkprime(p);
    checkArm(arm);
}



