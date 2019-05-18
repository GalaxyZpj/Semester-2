#include <stdio.h>

int main()
{
    int h, m, tm;

    printf("%s", "Enter the number of hours:");
    scanf("%d", &h);

    printf("%s", "Enter the number of minutes:");
    scanf("%d", &m);

    tm = (h*60)+m;

    printf("%s%d%s", "The total number of minutes is ", tm, ".");
    return 0;
}
