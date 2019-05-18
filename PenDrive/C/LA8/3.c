#include <stdio.h>

int main()
{
    int h, w, a, p;

    h = 7;
    w = 5;
    a = h * w;
    p = 2 * (h + w);

    printf("%s%d%s\n", "The area of the ractangle is: ", a, " inches.");
    printf("%s%d%s", "The perimeter of the rectangle is: ", p, " inches.");

    return 0;

}
