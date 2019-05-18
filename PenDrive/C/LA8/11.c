#include <stdio.h>

int main()
{
    float c, f;

    printf("%s", "Enter the temperature in centrigrade: ");
    scanf("%f", &c);

    f = ((9/5)*c)+32;

    printf("%s%f%s", "The temperature in fahrenhiet is ", f, ".");


    return 0;
}
