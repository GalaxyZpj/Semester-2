#include <stdio.h>

int main()
{
    int tc;

    printf("Enter temperature in centigrade: ");
    scanf("%d", &tc);

    if (tc<0) {
    printf("Freezing Weather");
    }
    else if (tc > 0 && tc <= 10) {
    printf("Very cold weather");
    }
    else if (tc > 10 && tc <= 20) {
    printf("Cold weather");
    }
    else if (tc > 20 && tc <= 30) {
    printf("Normal in Temp");
    }
    else if (tc > 30 && tc < 40) {
    printf("Its hot");
    }
    else if (tc >=40) {
    printf("Its very hot");
    }

    return 0;
}
