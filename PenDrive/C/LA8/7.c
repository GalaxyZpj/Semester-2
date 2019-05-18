#include <stdio.h>

int main()
{
    int n1, n2, n3, sum;

    printf("%s", "Enter the three numbers seperated by a comma(,): ");

    scanf("%d, %d, %d", &n1, &n2, &n3);

    sum = n1 + n2 + n3;

    printf("%s%d%s", "The sum of three numbers is ", sum, ".");

    return 0;
}
