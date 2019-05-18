#include <stdio.h>
#include <math.h>

int main()
{ int a, b, c;
    float root1, root2;


printf("Enter value of a: ");
scanf("%d", &a);

printf("Enter value of b: ");
scanf("%d", &b);

printf("Enter value of c: ");
scanf("%d", &c);

root1=(-b- sqrt((b*b)-(4*a*c)))/(2*a);
root2=(-b+ sqrt((b*b)-(4*a*c)))/(2*a);

printf("%s%f%s%f", "The roots of the given equation are", root1, "and", root2);





    return 0;
}
