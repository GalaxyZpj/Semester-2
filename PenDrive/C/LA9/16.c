#include <stdio.h>

int main()
{
    int n1, n2, op, sum, sub, mul;
    float div;

    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);

    printf("-----Operations-----");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");


    printf("Choose an operation: ");
    scanf("%d", &op);

    sum = n1+n2;
    sub = n1-n2;
    mul = n1*n2;
    div = n1/n2;

    switch(op)
    {
        case 1:
        printf("Sum of two numbers is %d", sum);
        break;
        case 2:
        printf("Subtraction of two numbers is %d", sub);
        break;
        case 3:
        printf("Multiplication of two numbers is %d", mul);
        break;
        case 4:
        printf("Division of two numbers is %f", div);
        break;

    }

    return 0;
}
