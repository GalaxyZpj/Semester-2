#include <stdio.h>

int main()
{
    char a;

    printf("Enter the Character: ");
    scanf("%c", &a);

    if ((a >= 33 && a <= 47)|| (a >= 58 && a<= 64) || (a >= 123 && a<= 126) || (a >= 91 && a<= 96)) {
    printf("Given Character is a symbol.");
    }
    else if (a >= 48 && a <= 57) {
    printf("Given Character is a Digit.");
    }
    else if (a >= 65 && a <= 90) {
    printf("Given Character is a Upper case alphabet.");
    }
    else if (a >= 97 && a <= 122) {
    printf("Given Character is a lower case alphabet.");
    }

    return 0;
}
