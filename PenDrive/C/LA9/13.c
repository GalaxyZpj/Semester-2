#include <stdio.h>

int main()
{   char g;

    printf("Enter the grade: ");
    scanf("%c", &g);

    if (g == 'A') {
    printf("Average");
    }
    else if (g == 'E') {
    printf("Excellent");
    }
    else if (g == 'V') {
    printf("Very good");
    }
    else if (g == 'G') {
    printf("Good");
    }
    else if (g == 'F') {
    printf("Fail");
    }

    return 0;
}

