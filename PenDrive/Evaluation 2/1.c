#include <stdio.h>

int main()
{
    int x,y=0;
    printf("The numbers between 100 and 200 divisible by 9 are: \n");
    for(x=100;x<=200;++x) {
        if(x%9 == 0) {
            printf("%d\n", x);
            y = x + y;
        }
    }
    printf("The sum of all the integers between 100 and 200 and which are divisible by 9 is: %d", y);


    return 0;
}
