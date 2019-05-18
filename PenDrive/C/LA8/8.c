#include <stdio.h>

int main()
{
    float w1, w2, avg;
    int q1, q2;

    printf("%s", "Enter the weight of both items seprated by a comma(,): ");
    scanf("%f,%f", &w1, &w2);

    printf("%s", "Enter the quantity of 2 items: ");
    scanf("%d,%d", &q1, &q2);

    avg = (w1*q1+w2*q2)/(q1+q2);

    printf("%s%f", "The average value of items is ", avg);


    return 0;
}
