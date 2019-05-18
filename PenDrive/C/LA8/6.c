#include <stdio.h>

int main()
{
    int age;

    printf("%s", "Enter your age: ");

    scanf("%d", &age);

    printf("%s%d%s", "Your age is ", age, ".");

    return 0;
}
