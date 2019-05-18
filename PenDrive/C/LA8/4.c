#include <stdio.h>

int main()
{

int r;
float a, p;

r = 6;
a = 3.14 * r * r;
p = 2 * 3.14 * r;

printf("%s%f%s\n", "The perimeter of the circle is: ", p, " inches.");
printf("%s%f%s", "The area of the circle is: ", a, " inches.");




return 0;
}
