#include <stdio.h>

int main()
{
    int s1, s2, s3;

    printf("Enter length of first side: ");
    scanf("%d", &s1);

    printf("Enter length of second side: ");
    scanf("%d", &s2);

    printf("Enter length of third side: ");
    scanf("%d", &s3);

    if (s1==s2 && s2==s3) {
    printf("The given triangle is equilateral.");
    }
    else if ((s1==s2 || s2==s3 || s1==s3)) {
    printf("The given triangle is Isosceles.");
    }
    else if (s1!=s2 && s2!=s3 && s1!=s3) {
    printf("The given triangle is Scalene.");
    }
    return 0;
}
