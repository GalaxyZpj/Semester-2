#include <stdio.h>

int main()
{
    int n1, n2, sum;
    printf("%s", "Enter the numbers seperated by comma(,): ");
    scanf("%d, %d", &n1, &n2);

    sum = n1 + n2;

    printf("%s%d%s", "The sum of two numbers is: ", sum, ".");

    return 0;
}
